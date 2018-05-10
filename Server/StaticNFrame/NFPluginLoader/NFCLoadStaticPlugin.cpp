#include "NFCPluginManager.h"

#include "NFComm/NFCore/NFServerTimeMgr.h"

#include "NFComm/NFActorPlugin/NFActorPlugin.h"
#include "NFComm/NFKernelPlugin/NFKernelPlugin.h"
#include "NFComm/NFPluginModule/NFEventMgr.h"
#include "NFComm/NFPluginModule/NFTimerMgr.h"
#include "NFComm/NFPluginModule/NFLogMgr.h"
#include "NFComm/NFPluginModule/NFConfigMgr.h"

#include "NFComm/NFPluginModule/NFILogModule.h"
#include "NFComm/NFPluginModule/NFIEventModule.h"
#include "NFComm/NFPluginModule/NFITimerModule.h"
#include "NFComm/NFNetPlugin/NFNetPlugin.h"
#include "NFTest/NFTestPlugin/NFTestPlugin.h"

bool NFCPluginManager::InitSingleton()
{
	NFServerTimeMgr::Instance()->Init(mFrame);
	NFConfigMgr::Instance()->Init(this);

	NFILogModule* pLogModule = NFIPluginManager::FindModule<NFILogModule>();
	NFIEventModule* pEventModule = NFIPluginManager::FindModule<NFIEventModule>();
	NFITimerModule* pTimerModule = NFIPluginManager::FindModule<NFITimerModule>();

	//��ʼ���¼�ϵͳ
	NFEventMgr::Instance()->Init(pEventModule);
	NFTimerMgr::Instance()->Init(pTimerModule);
	NFLogMgr::Instance()->Init(pLogModule);

	return true;
}

bool NFCPluginManager::ReleaseSingletion()
{
	//�ͷ�ʱ��ϵͳ
	NFServerTimeMgr::Instance()->UnInit();
	NFServerTimeMgr::Instance()->ReleaseInstance();

	//ϵͳ����
	NFConfigMgr::Instance()->UnInit();
	NFConfigMgr::Instance()->ReleaseInstance();

	//�ͷŶ�ʱ��
	NFTimerMgr::Instance()->UnInit();
	NFTimerMgr::Instance()->ReleaseInstance();

	//�¼�ϵͳ
	NFEventMgr::Instance()->UnInit();
	NFEventMgr::Instance()->ReleaseInstance();

	//�ͷ�LOG
	NFLogMgr::Instance()->UnInit();
	NFLogMgr::Instance()->ReleaseInstance();
	
	return true;
}

bool NFCPluginManager::LoadKernelPlugin()
{
	mPluginNameMap.insert(PluginNameMap::value_type("NFKernelPlugin", true));
	LoadStaticPlugin("NFKernelPlugin");

	return true;
}

bool NFCPluginManager::RegisterStaticPlugin()
{
	REGISTER_STATIC_PLUGIN(this, NFKernelPlugin);
	REGISTER_STATIC_PLUGIN(this, NFActorPlugin);
	REGISTER_STATIC_PLUGIN(this, NFNetPlugin);
	REGISTER_STATIC_PLUGIN(this, NFTestPlugin);
	return true;
}