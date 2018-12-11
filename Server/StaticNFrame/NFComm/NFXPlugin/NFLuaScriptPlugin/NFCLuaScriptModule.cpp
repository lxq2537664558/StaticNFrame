﻿// -------------------------------------------------------------------------
//    @FileName         :    NFCLuaScriptModule.cpp
//    @Author           :    LvSheng.Huang
//    @Date             :    2013-01-02
//    @Module           :    NFCLuaScriptModule
//    @Desc             :
// -------------------------------------------------------------------------

#include <assert.h>
#include <set>
#include "NFCLuaScriptModule.h"
#include "NFLuaScriptPlugin.h"
#include "NFComm/NFPluginModule/NFIKernelModule.h"
#include "NFComm/NFPluginModule/NFINetServerModule.h"
#include "NFComm/NFPluginModule/NFINetClientModule.h"
#include "NFComm/NFCore/NFProfiler.h"
#include "NFComm/NFCore/NFFileUtility.h"
#include "NFComm/NFCore/NFStringUtility.h"
#include "NFComm/NFPluginModule/NFLogMgr.h"
#include "NFComm/NFPluginModule/NFIHttpClientModule.h"
#include "NFComm/NFPluginModule/NFIHttpServerModule.h"
#include "NFComm/NFPluginModule/NFIMongoModule.h"

#include "NFServerLogic/NFServerLogicCommon/NFIGameLogicModule.h"

#define TRY_RUN_GLOBAL_SCRIPT_FUN0(strFuncName)   try {LuaIntf::LuaRef func(l, strFuncName);  func.call<LuaIntf::LuaRef>(); }   catch (LuaIntf::LuaException& e) { cout << e.what() << endl; }
#define TRY_RUN_GLOBAL_SCRIPT_FUN1(strFuncName, arg1)  try {LuaIntf::LuaRef func(l, strFuncName);  func.call<LuaIntf::LuaRef>(arg1); }catch (LuaIntf::LuaException& e) { cout << e.what() << endl; }
#define TRY_RUN_GLOBAL_SCRIPT_FUN2(strFuncName, arg1, arg2)  try {LuaIntf::LuaRef func(l, strFuncName);  func.call<LuaIntf::LuaRef>(arg1, arg2); }catch (LuaIntf::LuaException& e) { cout << e.what() << endl; }
#define TRY_RUN_GLOBAL_SCRIPT_FUN3(strFuncName, arg1, arg2, arg3)  try {LuaIntf::LuaRef func(l, strFuncName);  func.call<LuaIntf::LuaRef>(arg1, arg2, arg3); }catch (LuaIntf::LuaException& e) { cout << e.what() << endl; }

#define TRY_LOAD_SCRIPT_FLE(strFileName)  try{l.doFile(strFileName);} catch (LuaIntf::LuaException& e) { cout << e.what() << endl; }
#define TRY_ADD_PACKAGE_PATH(strFilePath)  try{ l.addPackagePath(strFilePath); } catch (LuaIntf::LuaException& e) { cout << e.what() << endl; }

bool NFCLuaScriptModule::Init()
{
#if NF_PLATFORM == NF_PLATFORM_WIN
	SetConsoleOutputCP(CP_UTF8);
#elif NF_PLATFORM == NF_PLATFORM_LINUX
#endif
    Register();
	LoadScript();
    return true;
}

bool NFCLuaScriptModule::AfterInit()
{
    return true;
}

bool NFCLuaScriptModule::ReadyExecute()
{
	TRY_RUN_GLOBAL_SCRIPT_FUN0("ScriptModule.Init");
	TRY_RUN_GLOBAL_SCRIPT_FUN0("ScriptModule.AfterInit");
	return true;
}

bool NFCLuaScriptModule::Shut()
{
    TRY_RUN_GLOBAL_SCRIPT_FUN0("ScriptModule.Shut");

    return true;
}

bool NFCLuaScriptModule::Finalize()
{
    return true;
}

bool NFCLuaScriptModule::Execute()
{
    //10秒钟reload一次

    if (NFGetSecondTime() - mnTime > 10)
    {
        BEGIN_PROFILE(__FUNCTION__);
        mnTime = NFGetSecondTime();
        TRY_RUN_GLOBAL_SCRIPT_FUN0("ScriptModule.Execute");
        END_PROFILE();
    }

    return true;
}

bool NFCLuaScriptModule::BeforeShut()
{
    TRY_RUN_GLOBAL_SCRIPT_FUN0("ScriptModule.BeforeShut");

    return true;
}

void NFCLuaScriptModule::LoadScript()
{
	TRY_ADD_PACKAGE_PATH(pPluginManager->GetLuaScriptPath());
	TRY_LOAD_SCRIPT_FLE("init.lua");

	TRY_RUN_GLOBAL_SCRIPT_FUN1("init_script_system", pPluginManager);
}

bool NFCLuaScriptModule::Register()
{
	LuaIntf::LuaBinding(l).beginClass<NFIPluginManager>("NFIPluginManager")
		.addFunction("GetAppName", &NFIPluginManager::GetAppName)
		.addFunction("GetInitTime", &NFIPluginManager::GetInitTime)
		.addFunction("GetNowTime", &NFIPluginManager::GetNowTime)
		.addFunction("IsLoadAllServer", &NFIPluginManager::IsLoadAllServer)
		.addFunction("GetConfigPath", &NFIPluginManager::GetConfigPath)
		.addFunction("GetKernelModule", &NFIPluginManager::FindModule<NFIKernelModule>)
		.addFunction("GetLogModule", &NFIPluginManager::FindModule<NFILogModule>)
		.addFunction("GetLuaModule", &NFIPluginManager::FindModule<NFILuaScriptModule>)
		.addFunction("GetServerModule", &NFIPluginManager::FindModule<NFINetServerModule>)
		.addFunction("GetClientModule", &NFIPluginManager::FindModule<NFINetClientModule>)
		.addFunction("GetHttpClientModule", &NFIPluginManager::FindModule<NFIHttpClientModule>)
		.addFunction("GetHttpServerModule", &NFIPluginManager::FindModule<NFIHttpServerModule>)
		.addFunction("GetMongoModule", &NFIPluginManager::FindModule<NFIMongoModule>)
		.addFunction("GetGameLogicModule", &NFIPluginManager::FindModule<NFIGameLogicModule>)
		.endClass();

	LuaIntf::LuaBinding(l).beginClass<NFIKernelModule>("NFIKernelModule")
		.addFunction("GetUUID", &NFIKernelModule::GetUUID)
		.addFunction("GetMD5", &NFIKernelModule::GetMD5)
		.addFunction("GetCRC32", &NFIKernelModule::GetCRC32)
		.addFunction("GetCRC16", &NFIKernelModule::GetCRC16)
		.addFunction("Base64Encode", &NFIKernelModule::Base64Encode)
		.addFunction("Base64Decode", &NFIKernelModule::Base64Decode)
		.endClass();

	LuaIntf::LuaBinding(l).beginClass<NFILuaScriptModule>("NFILuaScriptModule")
		.addFunction("AddTimer", &NFILuaScriptModule::AddTimer)
		.addFunction("StopTimer", &NFILuaScriptModule::StopTimer)
		.addFunction("AddClocker", &NFILuaScriptModule::AddClocker)
		.addFunction("StopClocker", &NFILuaScriptModule::StopClocker)
		.endClass();

	LuaIntf::LuaBinding(l).beginClass<NFIHttpClientModule>("NFIHttpClientModule")
		.addFunction("HttpRequestGet", &NFIHttpClientModule::LuaHttpGet)
		.addFunction("HttpRequestPost", &NFIHttpClientModule::LuaHttpPost)
		.endClass();

	LuaIntf::LuaBinding(l).beginClass<NFHttpRequest>("NFHttpRequest")
		.addProperty("url", &NFHttpRequest::get_url, &NFHttpRequest::set_url)
		.addProperty("path", &NFHttpRequest::get_path, &NFHttpRequest::set_path)
		.addProperty("remoteHost", &NFHttpRequest::get_remoteHost, &NFHttpRequest::set_remoteHost)
		.addProperty("type", &NFHttpRequest::get_type, &NFHttpRequest::set_type)
		.addProperty("body", &NFHttpRequest::get_body, &NFHttpRequest::set_body)
		.addProperty("params", &NFHttpRequest::get_params, &NFHttpRequest::set_params)
		.addProperty("headers", &NFHttpRequest::get_headers, &NFHttpRequest::set_headers)
	.endClass();

	LuaIntf::LuaBinding(l).beginClass<NFIHttpServerModule>("NFIHttpServerModule")
		.addFunction("AddRequestHandler", &NFIHttpServerModule::LuaAddRequestHandler)
		.addFunction("InitServer", &NFIHttpServerModule::InitServer)
		.addFunction("ResponseMsg", &NFIHttpServerModule::ResponseMsg)
		.endClass();

	LuaIntf::LuaBinding(l).beginClass<NFINetServerModule>("NFINetServerModule")
		.addFunction("AddServer", &NFINetServerModule::AddServer)
		.addFunction("GetLinkIp", &NFINetServerModule::GetLinkIp)
		.addFunction("AddReceiveLuaCallBackByMsgId", &NFINetServerModule::AddReceiveLuaCallBackByMsgId)
		.addFunction("AddReceiveLuaCallBackToOthers", &NFINetServerModule::AddReceiveLuaCallBackToOthers)
		.addFunction("AddEventLuaCallBack", &NFINetServerModule::AddEventLuaCallBack)
		.addFunction("SendByServerID", (void (NFINetServerModule::*)(uint32_t usLinkId, const uint32_t nMsgID, const std::string& strData, const uint64_t nPlayerID))(&NFINetServerModule::SendByServerID))
		.addFunction("SendToAllServer", (void (NFINetServerModule::*)(const uint32_t nMsgID, const std::string& strData, const uint64_t nPlayerID))(&NFINetServerModule::SendToAllServer))
		.addFunction("SendToAllServerByServerType", (void (NFINetServerModule::*)(NF_SERVER_TYPES eServerType, uint32_t nMsgID, const std::string& strData, const uint64_t nPlayerID))(&NFINetServerModule::SendToAllServer))
		.endClass();

	LuaIntf::LuaBinding(l).beginClass<NFINetClientModule>("NFINetClientModule")
		.addFunction("AddServer", &NFINetClientModule::AddServer)
		.addFunction("CloseServer", &NFINetClientModule::CloseServer)
		.addFunction("AddReceiveLuaCallBackByMsgId", &NFINetClientModule::AddReceiveLuaCallBackByMsgId)
		.addFunction("AddReceiveLuaCallBackToOthers", &NFINetClientModule::AddReceiveLuaCallBackToOthers)
		.addFunction("AddEventLuaCallBack", &NFINetClientModule::AddEventLuaCallBack)
		.addFunction("SendByServerID", (void (NFINetClientModule::*)(const uint32_t unLinkId, const uint32_t nMsgID, const std::string& strData, const uint64_t nPlayerID))(&NFINetClientModule::SendByServerID))
		.addFunction("SendToAllServer", (void (NFINetClientModule::*)(const uint32_t nMsgID, const std::string& strData, const uint64_t nPlayerID))(&NFINetClientModule::SendToAllServer))
		.addFunction("SendToAllServerByServerType", (void (NFINetClientModule::*)(NF_SERVER_TYPES eServerType, uint32_t nMsgID, const std::string& strData, const uint64_t nPlayerID))(&NFINetClientModule::SendToAllServer))
		.endClass();

	LuaIntf::LuaBinding(l).beginClass<NFILogModule>("NFILogModule")
		.addFunction("SetLogLevel", &NFILogModule::SetLogLevel)
		.addFunction("SetFlushOn", &NFILogModule::SetFlushOn)
		.addFunction("LuaDebug", &NFILogModule::LuaDebug)
		.addFunction("LuaInfo", &NFILogModule::LuaInfo)
		.addFunction("LuaWarn", &NFILogModule::LuaWarn)
		.addFunction("LuaError", &NFILogModule::LuaError)
		.endClass();

	LuaIntf::LuaBinding(l).beginClass<NFIMongoModule>("NFIMongoModule")
		.addFunction("AddMongoServer", (bool (NFIMongoModule::*)(const int nServerID, const std::string& uri, const std::string& dbname))&NFIMongoModule::AddMongoServer)
		.addFunction("CreateCollection", &NFIMongoModule::CreateCollection)
		.addFunction("DropCollection", &NFIMongoModule::DropCollection)
		.addFunction("UpdateOneByKey", (bool (NFIMongoModule::*)(const int nServerID, const std::string& collectionName, const std::string& json, uint64_t key))&NFIMongoModule::UpdateOneByKey)
		.addFunction("UpdateOne", (bool (NFIMongoModule::*)(const int nServerID, const std::string& collectionName, const std::string& json))&NFIMongoModule::UpdateOne)
		.addFunction("FindOne", &NFIMongoModule::FindOne)
		.addFunction("FindMany", &NFIMongoModule::FindMany)
		.addFunction("FindAll", &NFIMongoModule::FindAllToJson)
		.addFunction("FindOneByKey", (std::string (NFIMongoModule::*)(const int nServerID, const std::string& collectionName, int64_t key))&NFIMongoModule::FindOneByKey)
		.addFunction("UpdateFieldByKey", (bool (NFIMongoModule::*)(const int nServerID, const std::string& collectionName, const std::string& json, uint64_t key))&NFIMongoModule::UpdateFieldByKey)
		.addFunction("FindFieldByKey", (std::string(NFIMongoModule::*)(const int nServerID, const std::string& collectionName, const std::string& fieldPath, int64_t key))&NFIMongoModule::FindFieldByKey)
		.endClass();

	LuaIntf::LuaBinding(l).beginClass<PlayerAccountInfo>("PlayerAccountInfo")
	.addProperty("Id", &PlayerAccountInfo::GetUid, &PlayerAccountInfo::SetUid)
	.addProperty("SendString", &PlayerAccountInfo::GetSendMsg, &PlayerAccountInfo::SetSendMsg)
	.endClass();

	LuaIntf::LuaBinding(l).beginClass<NFIGameLogicModule>("NFIGameLogicModule")
		.addFunction("GetAccount", &NFIGameLogicModule::GetPlayerAccountInfo)
		.endClass();

	return true;
}

void NFCLuaScriptModule::RunNetRecvLuaFunc(const std::string& luaFunc, const uint32_t unLinkId, const uint64_t valueId, const uint32_t nMsgId, const std::string& strMsg)
{
	TryRunGlobalScriptFunc(luaFunc, unLinkId, valueId, nMsgId, strMsg);
}

void NFCLuaScriptModule::RunNetEventLuaFunc(const std::string& luaFunc, const eMsgType nEvent, const uint32_t unLinkId)
{
	TryRunGlobalScriptFunc(luaFunc, nEvent, unLinkId);
}

void NFCLuaScriptModule::RunHtttpClientLuaFunc(const std::string& luaFunc, const int state_code, const std::string& strRespData, const std::string& strUserData)
{
	TryRunGlobalScriptFunc("unilight.HttpClientRequestCallBack", luaFunc, state_code, strRespData, strUserData);
}

void NFCLuaScriptModule::RunHttpServerLuaFunc(const std::string& luaFunc, const NFHttpRequest & req)
{
	TryRunGlobalScriptFunc("unilight.HttpServerRequestCallBack", luaFunc, req);
}

void NFCLuaScriptModule::OnTimer(uint32_t nTimerID)
{
	auto iter = m_luaTimerMap.find(nTimerID);
	if (iter != m_luaTimerMap.end())
	{
		NFLuaTimer& luaTimer = iter->second;

		TryRunGlobalScriptFunc("LuaNFrame.RunTimer", luaTimer.mLuaFunc, nTimerID, luaTimer.mUseData);

		luaTimer.mCurCallCount++;
		if (luaTimer.mCurCallCount == luaTimer.mCallCount)
		{
			m_luaTimerMap.erase(nTimerID);
		}
	}
}

void NFCLuaScriptModule::StopTimer(uint32_t nTimerID)
{
	KillTimer(nTimerID);
	m_luaTimerMap.erase(nTimerID);
}

void NFCLuaScriptModule::StopClocker(uint32_t nTimerID)
{
	KillFixTimer(nTimerID);
	m_luaTimerMap.erase(nTimerID);
}

uint32_t NFCLuaScriptModule::AddTimer(const std::string& luaFunc, uint64_t nInterVal, const std::string& useData)
{
	NFLuaTimer luaTimer;
	luaTimer.mLuaFunc = luaFunc;
	luaTimer.mInterVal = nInterVal;
	luaTimer.mCallCount = INFINITY_CALL;
	luaTimer.mCurCallCount = 0;
	luaTimer.mUseData = useData;
	luaTimer.mTimerId = ++m_luaTimerIndex;

	SetTimer(luaTimer.mTimerId, luaTimer.mInterVal, luaTimer.mCallCount);
	m_luaTimerMap.emplace(luaTimer.mTimerId, luaTimer);
	return luaTimer.mTimerId;
}

uint32_t NFCLuaScriptModule::AddClocker(const std::string& luaFunc, uint64_t nStartTime, uint32_t nInterDays, const std::string& useData)
{
	NFLuaTimer luaTimer;
	luaTimer.mLuaFunc = luaFunc;
	luaTimer.mCallCount = INFINITY_CALL;
	luaTimer.mCurCallCount = 0;
	luaTimer.mUseData = useData;
	luaTimer.mTimerId = ++m_luaTimerIndex;

	SetFixTimer(luaTimer.mTimerId, nStartTime, nInterDays, luaTimer.mCallCount);
	m_luaTimerMap.emplace(luaTimer.mTimerId, luaTimer);
	return luaTimer.mTimerId;
}

void NFCLuaScriptModule::RunAccountConnectFunc(PlayerAccountInfo* laccount)
{
	TryRunGlobalScriptFunc("Tcp.account_connect", laccount);
}

void NFCLuaScriptModule::RunAccountDisConnectFunc(PlayerAccountInfo* laccount)
{
	TryRunGlobalScriptFunc("Tcp.account_disconnect", laccount);
}

void NFCLuaScriptModule::RunAccountReConnectFunc(PlayerAccountInfo* laccount)
{
	TryRunGlobalScriptFunc("Tcp.reconnect_login_ok", laccount);
}
