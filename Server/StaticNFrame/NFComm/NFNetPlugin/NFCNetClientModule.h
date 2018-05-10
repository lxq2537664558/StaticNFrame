#pragma once

#include "NFComm/NFPluginModule/NFINetClientModule.h"
#include "NFComm/NFPluginModule/NFServerDefine.h"
#include "NFClient.h"
#include "NFComm/NFCore/NFDataStream.h"
#include "NFComm/NFCore/NFBuffer.h"

class NFCNetClientModule: public NFINetClientModule
{
public:
	explicit NFCNetClientModule(NFIPluginManager* p);
	virtual ~NFCNetClientModule();
/////////////////////////////////////////////////////////////////////
	virtual bool Init() override;

	virtual bool AfterInit() override;

	virtual bool BeforeShut() override;

	virtual bool Shut() override;

	virtual bool Execute() override;

	virtual bool Finalize() override;

///////////////////////////////////////////////////////////////////////

	virtual uint32_t AddServer(NF_SERVER_TYPES eServerType, const std::string& strIp, const int nPort, bool useThread = true);

	virtual void CloseServer(const uint32_t unLinkId);

	virtual void CloseServerByServerType(NF_SERVER_TYPES eServerType);

	virtual void CloseAllServer();

////////////////////////////////////////////////////////////////////////////////

	virtual void SendByServerID(const uint32_t unLinkId, const uint32_t nMsgID, const std::string& strData, const uint64_t nPlayerID);

	virtual void SendByServerID(const uint32_t unLinkId, const uint32_t nMsgID, const char* msg, const uint32_t nLen, const uint64_t nPlayerID);

	virtual void SendToServerByPB(const uint32_t unLinkId, const uint32_t nMsgID, const google::protobuf::Message& xData, const uint64_t nPlayerID);

	virtual void SendToAllServer(const uint32_t nMsgID, const std::string& strData, const uint64_t nPlayerID);

	virtual void SendToAllServer(const uint32_t nMsgID, const char* msg, const uint32_t nLen, const uint64_t nPlayerID);

	virtual void SendToAllServerByPB(const uint32_t nMsgID, const google::protobuf::Message& xData, const uint64_t nPlayerID);

	virtual void SendToAllServer(NF_SERVER_TYPES eServerType, uint32_t nMsgID, const std::string& strData, const uint64_t nPlayerID);

	virtual void SendToAllServer(NF_SERVER_TYPES eServerType, const uint32_t nMsgID, const char* msg, const uint32_t nLen, const uint64_t nPlayerID);

	virtual void SendToAllServerByPB(NF_SERVER_TYPES eServerType, const uint32_t nMsgID, const google::protobuf::Message& xData, const uint64_t nPlayerID);
protected:
	void ProcessExecute();

	int OnConnected(const eMsgType nEvent, const uint32_t unLinkId);

	int OnDisConnected(const eMsgType nEvent, const uint32_t unLinkId);

////////////////////////////////////////////////////////////////////////////////

	virtual uint32_t GetFreeUnLinkId(NF_SERVER_TYPES eServerType);

	void SendMsg(NFClient* pClient, const uint32_t nMsgID, const char* msg, const uint32_t nLen, const uint64_t nPlayerID);	

	void OnReceiveNetPack(const uint32_t unLinkId, const uint64_t playerId, const uint32_t nMsgId, const char* msg, const uint32_t nLen);

	void OnSocketNetEvent(const eMsgType nEvent, const uint32_t unLinkId);

private:
    std::vector<std::vector<NFClient*>> mxServerMap;
	NFBuffer	mxSendBuffer;
};