// -------------------------------------------------------------------------
//    @FileName         :    NFCServerNetEventModule.h
//    @Author           :    GaoYi
//    @Date             :    2018-12-21
//    @Module           :    NFCServerNetEventModule
//
// -------------------------------------------------------------------------

#pragma once

#include "NFComm/NFPluginModule/NFIServerNetEventModule.h"

class NFILuaScriptModule;

class NFCServerNetEventModule : public NFIServerNetEventModule
{
public:
	/**
	* @brief ���캯��
	*/
	NFCServerNetEventModule(NFIPluginManager* p);

	/**
	* @brief ��������
	*/
	virtual ~NFCServerNetEventModule();

	/**
	* @brief
	*
	* @return bool
	*/
	virtual bool Awake() override;

	/**
	* @brief
	*
	* @return bool
	*/
	virtual bool Init() override;

	/**
	* @brief
	*
	* @return bool
	*/
	virtual bool AfterInit() override;

	/**
	* @brief
	*
	* @return bool
	*/
	virtual bool BeforeShut() override;

	/**
	* @brief
	*
	* @return bool
	*/
	virtual bool Shut() override;

	/**
	* @brief �ͷ�����
	*
	* @return bool
	*/
	virtual bool Finalize() override;

	/**
	* @brief
	*
	* @return bool
	*/
	virtual bool Execute() override;

	virtual void RunServerNetEventLuaFunc(const std::string& luaFunc, eMsgType nEvent, uint32_t unLinkId, NF_SHARE_PTR<NFServerData> pServerData);

	virtual void RunAccountNetEventLuaFunc(const std::string& luaFunc, uint32_t nEvent, uint32_t unLinkId, NF_SHARE_PTR<AccountInfo> pServerData);
private:
	NFILuaScriptModule* m_pLuaScriptModule;
};