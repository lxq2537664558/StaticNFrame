// -------------------------------------------------------------------------
//    @FileName         :    NFProxyClient_GameModule.cpp
//    @Author           :    GaoYi
//    @Date             :    2018/06/12
//    @Email			:    445267987@qq.com
//    @Module           :    NFProxyClientPlugin
//
// -------------------------------------------------------------------------

#include "NFLoginClient_MasterModule.h"
#include "NFComm/NFPluginModule/NFIPluginManager.h"
#include <NFComm/NFPluginModule/NFConfigMgr.h>
#include <NFComm/NFPluginModule/NFEventMgr.h>
#include <NFComm/NFPluginModule/NFEventDefine.h>
#include "NFServer/NFServerCommon/NFServerCommon.h"
#include "NFComm/NFCore/NFCpu.h"

NFCLoginClient_MasterModule::NFCLoginClient_MasterModule(NFIPluginManager* p)
{
	m_pPluginManager = p;
	m_pNetClientModule = nullptr;
	mhashf = NFHash::hash_new<std::string>();
}

NFCLoginClient_MasterModule::~NFCLoginClient_MasterModule()
{
}

bool NFCLoginClient_MasterModule::Init()
{
	m_pNetClientModule = m_pPluginManager->FindModule<NFINetClientModule>();
	m_pMasterServerData = NF_SHARE_PTR<NFServerData>(NF_NEW NFServerData());
	return true;
}

bool NFCLoginClient_MasterModule::AfterInit()
{
	m_pNetClientModule->AddEventCallBack(NF_ST_MASTER, this, &NFCLoginClient_MasterModule::OnProxySocketEvent);
	m_pNetClientModule->AddReceiveCallBack(NF_ST_MASTER, this, &NFCLoginClient_MasterModule::OnHandleOtherMessage);

	m_pNetClientModule->AddReceiveCallBack(NF_ST_MASTER, EGMI_NET_MASTER_SEND_OTHERS_TO_LOGIN, this, &NFCLoginClient_MasterModule::OnServerReport);

	NFServerConfig* pConfig = NFServerCommon::GetServerConfig(m_pPluginManager, NF_ST_MASTER);
	if (pConfig)
	{
		//AddServer会自动重连，断开连接时，m_pMasterServerData->mUnlinkId不用清理，不变
		m_pMasterServerData->mUnlinkId = m_pNetClientModule->AddServer(NF_ST_MASTER, pConfig->mServerIp, pConfig->mServerPort);
		m_pMasterServerData->mServerInfo.set_server_id(pConfig->mServerId);
		m_pMasterServerData->mServerInfo.set_server_ip(pConfig->mServerIp);
		m_pMasterServerData->mServerInfo.set_server_port(pConfig->mServerPort);
		m_pMasterServerData->mServerInfo.set_server_name(pConfig->mServerName);
		m_pMasterServerData->mServerInfo.set_server_type(pConfig->mServerType);
		m_pMasterServerData->mServerInfo.set_server_state(NFMsg::EST_NARMAL);
	}
	else
	{
		NFLogError(NF_LOG_SERVER_NOT_HANDLE_MESSAGE, 0, "I Can't get the Master Server config!");
		return false;
	}

	return true;
}

void NFCLoginClient_MasterModule::OnServerReport(const uint32_t unLinkId, const uint64_t playerId, const uint32_t nMsgId, const char* msg, const uint32_t nLen)
{
	NFMsg::ServerInfoReportList xMsg;
	CLIENT_MSG_PROCESS_NO_OBJECT(nMsgId, playerId, msg, nLen, xMsg);

	for (int i = 0; i < xMsg.server_list_size(); ++i)
	{
		const NFMsg::ServerInfoReport& xData = xMsg.server_list(i);
		NF_SHARE_PTR<NFServerData> pServerData;
		switch (xData.server_type())
		{
		case NF_SERVER_TYPES::NF_ST_WORLD:
		{
			pServerData = mWorldMap.GetElement(xData.server_id());
			if (!pServerData)
			{
				pServerData = std::shared_ptr<NFServerData>(new NFServerData());
				mWorldMap.AddElement(xData.server_id(), pServerData);
			}
		}
		break;
		case NF_SERVER_TYPES::NF_ST_PROXY:
		{
			pServerData = mProxyMap.GetElement(xData.server_id());
			if (!pServerData)
			{
				pServerData = std::shared_ptr<NFServerData>(new NFServerData());
				mProxyMap.AddElement(xData.server_id(), pServerData);
			}
		}
		break;
		case NF_SERVER_TYPES::NF_ST_GAME:
		{
			pServerData = mGameMap.GetElement(xData.server_id());
			if (!pServerData)
			{
				pServerData = std::shared_ptr<NFServerData>(new NFServerData());
				mGameMap.AddElement(xData.server_id(), pServerData);
			}
		}
		break;
		}
		if (pServerData)
		{
			pServerData->mUnlinkId = unLinkId;
			pServerData->mServerInfo = xData;
		}
	}
}

bool NFCLoginClient_MasterModule::Execute()
{
	ServerReport();
	return true;
}

bool NFCLoginClient_MasterModule::BeforeShut()
{
	return true;
}

bool NFCLoginClient_MasterModule::Shut()
{
	return true;
}

void NFCLoginClient_MasterModule::OnProxySocketEvent(const eMsgType nEvent, const uint32_t unLinkId)
{
	if (unLinkId != m_pMasterServerData->mUnlinkId) return;

	if (nEvent == eMsgType_CONNECTED)
	{
		NFLogDebug(NF_LOG_SERVER_NOT_HANDLE_MESSAGE, 0, "Login Server Connect Master Server Success!");
	
		RegisterServer();
	}
	else if (nEvent == eMsgType_DISCONNECTED)
	{
		NFLogDebug(NF_LOG_SERVER_NOT_HANDLE_MESSAGE, 0, "Login Server DisConnect Master Server!");
	}
}

void NFCLoginClient_MasterModule::OnHandleOtherMessage(const uint32_t unLinkId, const uint64_t playerId, const uint32_t nMsgId, const char* msg, const uint32_t nLen)
{
	if (unLinkId != m_pMasterServerData->mUnlinkId) return;

	NFLogWarning(NF_LOG_SERVER_NOT_HANDLE_MESSAGE, 0, "msg:{} not handled", nMsgId);
}

void NFCLoginClient_MasterModule::RegisterServer()
{
	NFServerConfig* pConfig = NFServerCommon::GetAppConfig(m_pPluginManager, NF_ST_LOGIN);
	if (pConfig)
	{
		NFMsg::ServerInfoReportList xMsg;
		NFMsg::ServerInfoReport* pData = xMsg.add_server_list();
		pData->set_server_id(pConfig->mServerId);
		pData->set_server_name(pConfig->mServerName);
		pData->set_server_ip(pConfig->mServerIp);
		pData->set_server_port(pConfig->mServerPort);
		pData->set_server_type(pConfig->mServerType);
		pData->set_server_max_online(pConfig->mMaxConnectNum);
		pData->set_server_state(NFMsg::EST_NARMAL);

		m_pNetClientModule->SendToServerByPB(m_pMasterServerData->mUnlinkId, EGMI_NET_LOGIN_TO_MASTER_REGISTER, xMsg, 0);
	}
}

void NFCLoginClient_MasterModule::ServerReport()
{
	static uint64_t mLastReportTime = m_pPluginManager->GetNowTime();
	if (mLastReportTime + 10000 > m_pPluginManager->GetNowTime())
	{
		return;
	}

	mLastReportTime = m_pPluginManager->GetNowTime();

	NFServerConfig* pConfig = NFServerCommon::GetAppConfig(m_pPluginManager, NF_ST_LOGIN);
	if (pConfig)
	{
		NFMsg::ServerInfoReportList xMsg;
		NFMsg::ServerInfoReport* pData = xMsg.add_server_list();
		pData->set_server_id(pConfig->mServerId);
		pData->set_server_name(pConfig->mServerName);
		pData->set_server_ip(pConfig->mServerIp);
		pData->set_server_port(pConfig->mServerPort);
		pData->set_server_type(pConfig->mServerType);
		pData->set_server_max_online(pConfig->mMaxConnectNum);
		pData->set_server_state(NFMsg::EST_NARMAL);

		m_pNetClientModule->SendToServerByPB(m_pMasterServerData->mUnlinkId, EGMI_STS_SERVER_REPORT, xMsg, 0);
	}
}

NF_SHARE_PTR<NFServerData> NFCLoginClient_MasterModule::GetSuitProxyServer(const std::string& name)
{
	int index = (int)mhashf(name);
	return mProxyMap.GetElementBySuit(index);
}

NF_SHARE_PTR<NFServerData> NFCLoginClient_MasterModule::GetSuitGameServer(const std::string& name)
{
	int index = (int)mhashf(name);
	return mGameMap.GetElementBySuit(index);
}

NF_SHARE_PTR<NFServerData> NFCLoginClient_MasterModule::GetSuitWorldServer()
{
	return mWorldMap.First();
}

NF_SHARE_PTR<NFServerData> NFCLoginClient_MasterModule::GetRandProxyServer()
{
	return mProxyMap.GetElementBySuitRandom();
}

NF_SHARE_PTR<NFServerData> NFCLoginClient_MasterModule::GetRandGameServer()
{
	return mGameMap.GetElementBySuitRandom();
}

NF_SHARE_PTR<NFServerData> NFCLoginClient_MasterModule::GetProxyServerByServerId(uint32_t serverId)
{
	return mProxyMap.GetElement(serverId);
}

NF_SHARE_PTR<NFServerData> NFCLoginClient_MasterModule::GetGameServerByServerId(uint32_t serverId)
{
	return mGameMap.GetElement(serverId);
}

std::vector<NF_SHARE_PTR<NFServerData>> NFCLoginClient_MasterModule::GetAllGameServer(uint32_t gameid)
{
	std::vector<NF_SHARE_PTR<NFServerData>> vec;
	auto pServerData = mGameMap.First();
	while (pServerData)
	{
		if (pServerData->GetGameId() == gameid)
		{
			vec.push_back(pServerData);
		}
		pServerData = mGameMap.Next();
	}
	return vec;
}
