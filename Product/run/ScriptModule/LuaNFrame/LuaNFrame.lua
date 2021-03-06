-- json
json = cjson.new()

LuaNFrame = LuaNFrame or {}

function LuaNFrame.init(pluginManager, luaModule)
	CPPNFrame:init(pluginManager, luaModule)
end

--添加服务器秒定时器
function LuaNFrame.AddTimer(luaFunc, nInterValSec, nCallCount)
    if nInterValSec == nil or type(luaFunc) ~= "string" then
		LuaNFrame.Error(NFLogId.NF_LOG_SYSTEMLOG, 0, __G__TRACKBACK__("AddTimer Para Error"))
		return
    end

    if nCallCount == nil then
		nCallCount = 0;
	elseif type(nCallCount) ~= "number" then
		LuaNFrame.Error(NFLogId.NF_LOG_SYSTEMLOG, 0, __G__TRACKBACK__("AddTimer Para Error:nCallCount is not number"))
		return
	end

	return CPPNFrame:AddTimer(luaFunc, nInterValSec*1000, nCallCount)
end

--每嗝1毫秒的定时器示例, 300ms执行testtimer函数一次,总共执行5此
--LuaNFrame.addtimermsec("testtimer",300, 5)
function LuaNFrame.AddTimerMsec(luaFunc, nInterValMSec, nCallCount)
	if nInterValMSec == nil or type(luaFunc) ~= "string" then
		LuaNFrame.Error(NFLogId.NF_LOG_SYSTEMLOG, 0, __G__TRACKBACK__("AddTimerMsec Para Error"))
		return
    end

    if nCallCount == nil then
        nCallCount = 0;
	end
	
	if nCallCount == nil then
		nCallCount = 0;
	elseif type(nCallCount) ~= "number" then
		LuaNFrame.Error(NFLogId.NF_LOG_SYSTEMLOG, 0, __G__TRACKBACK__("AddTimerMsec Para Error:nCallCount is not number"))
		return
	end

	return CPPNFrame:AddTimer(luaFunc, nInterValMSec, nCallCount)
end

--停止服务器定时器
function LuaNFrame.StopTimer(timer)
	if type(timer) ~= "number" then
		LuaNFrame.Error(NFLogId.NF_LOG_SYSTEMLOG, 0, __G__TRACKBACK__("StopTimer Para Error"))
		return 
	end
	CPPNFrame:StopTimer(timer)
end

-- 关于闹钟实例：
--  原理解释：
	-- intervalSec 表示从1970年开始到现在，把所有的时间以intervalSec为单位划分用 “---”表示
	-- sec 表示，在intervalSec这个单位时间段内需要触发闹钟的时刻用"*"表示
	-- 所以要求sec < intervalSec
	-- 图示：1970开始｜-*---｜-*--｜-*--|.......|-*--|now
-- 实例：
-- （1）每隔物理10秒的第1秒时钟实例 ：LuaNFrame.addclocker("testclocker",1,10,0);
	--function testclocker(text,clocker)
	--	LuaNFrame.debug("testclocker:"..text)
	--  clocker.Stop()
	--end
--  (2) 每天上午8点触发闹钟实例：LuaNFrame.addclocker("OnClocker", 8*3600, 24*3600, 0 );
	--function OnClocker(text,clocker)
	--	LuaNFrame.debug("每日触发实列")
	--end
-- (3) 每周（7*24*3600）的第34个小时触发闹钟：LuaNFrame.addclocker("OnClocker", 34*3600, 7*24*3600, 0);
-- 
function LuaNFrame.AddClocker(luaFunc, sec, intervalSec, nCallCount)
	if type(luaFunc) ~= "string" or type(sec) ~= "number" or type(intervalSec) ~= "number" then
		LuaNFrame.Error(NFLogId.NF_LOG_SYSTEMLOG, 0, __G__TRACKBACK__("AddClocker Para Error"))
		return
    end

    if nCallCount == nil then
        nCallCount = 0;
	end
	
	if nCallCount == nil then
		nCallCount = 0;
	elseif type(nCallCount) ~= "number" then
		LuaNFrame.Error(NFLogId.NF_LOG_SYSTEMLOG, 0, __G__TRACKBACK__("AddClocker Para Error:nCallCount is not number"))
		return
	end

	return CPPNFrame:AddClocker(luaFunc, sec, intervalSec, nCallCount)
end

--创建全局唯一的UUID
function LuaNFrame.GetUUID()
    return CPPNFrame:GetUUID()
end

--获得服务器开启时间，单位ms
function LuaNFrame.GetInitTime()
    return CPPNFrame:GetInitTime()
end

--获得服务器当前时间，单位ms
function LuaNFrame.GetNowTime()
    return CPPNFrame:GetNowTime()
end

--通过字符串获得MD5, 返回MD5字符串
function LuaNFrame.GetMD5(str)
	if type(str) ~= "string" then
		LuaNFrame.Error(NFLogId.NF_LOG_SYSTEMLOG, 0, __G__TRACKBACK__("GetMD5 Para Error"))
		return
    end
    return CPPNFrame:GetMD5(str)
end

--通过字符串获得对应的CRC32, 返回数字
function LuaNFrame.GetCRC32(str)
	if type(str) ~= "string" then
		LuaNFrame.Error(NFLogId.NF_LOG_SYSTEMLOG, 0, __G__TRACKBACK__("GetCRC32 Para Error"))
		return
    end
    return CPPNFrame:GetCRC32(str)
end

--通过字符串获得对应的CRC16, 返回数字
function LuaNFrame.GetCRC16(str)
	if type(str) ~= "string" then
		LuaNFrame.Error(NFLogId.NF_LOG_SYSTEMLOG, 0, __G__TRACKBACK__("GetCRC16 Para Error"))
		return
    end
    return CPPNFrame:GetCRC16(str)
end

--通过字符串获得对应的Base64Encode, 返回字符串
function LuaNFrame.Base64Encode(str)
	if type(str) ~= "string" then
		LuaNFrame.Error(NFLogId.NF_LOG_SYSTEMLOG, 0, __G__TRACKBACK__("Base64Encode Para Error"))
		return
    end
    return CPPNFrame:Base64Encode(str)
end

--通过字符串获得对应的Base64Decode, 返回字符串
function LuaNFrame.Base64Decode(str)
	if type(str) ~= "string" then
		LuaNFrame.Error(NFLogId.NF_LOG_SYSTEMLOG, 0, __G__TRACKBACK__("Base64Decode Para Error"))
		return
    end
    return CPPNFrame:Base64Decode(str)
end

--设置LOG等级
function LuaNFrame.SetLogLevel(level)
    CPPNFrame:SetLogLevel(level)
end

--设置LOG立马刷新等级
function LuaNFrame.SetFlushOn(level)
    CPPNFrame:SetFlushOn(level)
end

--使用方法，BeginProfiler -- EndProfiler必须成对出现
function LuaNFrame.BeginProfiler(funname)
	if type(funname) ~= "string" then
		LuaNFrame.Error(NFLogId.NF_LOG_SYSTEMLOG, 0, __G__TRACKBACK__("BeginProfiler Para Error"))
		return
    end
    CPPNFrame:BeginProfiler(funname)
end

function LuaNFrame.EndProfiler()
    return CPPNFrame:EndProfiler()
end

--serverNetEventModule 注册服务器与服务器之间的网络回调，主要有连接回调，断线回调
--比如说，luaFuncStr格式：luaFuncStr（eMsgType nEvent, uint32_t unLinkId, NF_SHARE_PTR<NFServerData> pServerData）
--
function LuaNFrame.AddServerEventCallBack(eSourceType, eTargetType, luaFuncStr)
    CPPNFrame:AddServerEventCallBack(eSourceType, eTargetType, luaFuncStr)
end

--serverNetEventModule 注册账号网络回调，主要有玩家连接回调，断线回调，重连回调
--比如说，luaFuncStr格式：luaFuncStr（uint32_t nEvent, uint32_t unLinkId, NF_SHARE_PTR<AccountInfo> pServerData）
--
function LuaNFrame.AddAccountEventCallBack(eServerType, luaFuncStr)
    CPPNFrame:AddAccountEventCallBack(eServerType, luaFuncStr)
end

LuaNFrame.Debug = function(logId, guid, ...)
	local cStackInfo = debug.getinfo(2, "Sl")
	if cStackInfo then
		CPPNFrame:Debug("["..tostring(cStackInfo.short_src)..":"..tostring(cStackInfo.currentline).."] | "..tostring(...))
	else
		CPPNFrame:Debug(logId, guid, tostring(...))
	end
end

LuaNFrame.Info = function(logId, guid, ...)
	local cStackInfo = debug.getinfo(2, "Sl")
	if cStackInfo then
		CPPNFrame:Info("["..tostring(cStackInfo.short_src)..":"..tostring(cStackInfo.currentline).."] | "..tostring(...))
	else
		CPPNFrame:Info(tostring(...))
	end
end

LuaNFrame.Warn = function(logId, guid, ...)
	local cStackInfo = debug.getinfo(2, "Sl")
	if cStackInfo then
		CPPNFrame:Warn("["..tostring(cStackInfo.short_src)..":"..tostring(cStackInfo.currentline).."] | "..tostring(...))
	else
		CPPNFrame:Warn(tostring(...))
	end
end

LuaNFrame.Error = function(logId, guid, ...)
	local cStackInfo = debug.getinfo(2, "Sl")
	if cStackInfo then
		CPPNFrame:Error(logId, guid, "["..tostring(cStackInfo.short_src)..":"..tostring(cStackInfo.currentline).."] | "..tostring(...))
	else
		CPPNFrame:Error(logId, guid, tostring(...))
	end
end

LuaNFrame.ExeFunc = function(func)
	local status, msg = xpcall (func, __G_TRACKBACK__)

    if not status then
        LuaNFrame.Error(msg)
    end
end
