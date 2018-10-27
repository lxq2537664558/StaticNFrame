// -------------------------------------------------------------------------
//    @FileName         :    NFILuaScriptModule.h
//    @Author           :    GaoYi
//    @Date             :    2018/05/25
//    @Email			:    445267987@qq.com
//    @Module           :    NFPluginModule
//
// -------------------------------------------------------------------------
#pragma once

#include <vector>
#include <map>
#include <memory>

#include "NFITimerModule.h"
#include "NFServerDefine.h"

class NFILuaScriptModule : public NFIModule
{
public:
	NFILuaScriptModule()
	{
	}
public:
	virtual void RunNetRecvLuaFunc(const std::string& luaFunc, const uint32_t unLinkId, const uint64_t valueId, const uint32_t nMsgId, const char* msg, const uint32_t nLen) = 0;


	virtual void RunNetEventLuaFunc(const std::string& luaFunc, const eMsgType nEvent, const uint32_t unLinkId) = 0;
public:
};

