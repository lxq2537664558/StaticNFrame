// -------------------------------------------------------------------------
//    @FileName         :    NFSystemInfo.h
//    @Author           :    GaoYi
//    @Date             :    2018-12-23
//    @Module           :    NFSystemInfo
//    @Desc             :
// -------------------------------------------------------------------------

#pragma once

#include "NFComm/NFCore/NFPlatform.h"

class NFMemInfo
{
public:
	NFMemInfo()
	{
		mTotalMem = 0;
		mFreeMem = 0;
		mUsedMem = 0;
		mUsedPercent = 0.0;
		mFreePercent = 0.0;
	}

	uint64_t mTotalMem;		//全部内存
	uint64_t mFreeMem;		//可用的内存
	uint64_t mUsedMem;		//已经使用的内存
	double mUsedPercent;		//使用率
	double mFreePercent;		//可用率
};

class NFCpuInfo
{
public:

};

class NFOsInfo
{
public:
	NFOsInfo()
	{

	}

	std::string mOsName;
	std::string mOsVersion;
	std::string mOsArch;
	std::string mOsMachine;
	std::string mOsDescription;
	std::string mPatchLevel;
	std::string mVendor;
	std::string mVendorVersion;
	std::string mVerdorName;
	std::string mVendorCodeName;
};

class NFProcessInfo
{
public:
	NFProcessInfo()
	{
		mPid = 0;
		mCpuUsed = 0.0;
		mMemUsed = 0;
		mThreads = 0;
	}

	std::string mName;	//进程名字
	std::string mCwd;	//进程目录

	uint32_t mPid = 0;
	double   mCpuUsed = 0.0;
	uint64_t mMemUsed = 0;
	uint32_t mThreads = 0;
};

class NFSystemInfo
{
public:
	NFSystemInfo();
	virtual ~NFSystemInfo();

	virtual void Init();

	virtual uint32_t GetProcessPid(); //获得当前机子的进程ID

	virtual const NFMemInfo& GetMemInfo() const;
	virtual const NFProcessInfo& GetProcessInfo() const;
	virtual const NFOsInfo& GetOsInfo() const;
	virtual float GetCurCpuPer() const;
	virtual uint64_t GetCurMemPer() const;
	virtual uint32_t GetCpuCount() const;

	virtual double CountProcessCpuPer(uint32_t pid);
	virtual uint64_t CountProcessMemPer(uint32_t pid);

	virtual void CountCurProcessBaseInfo();
	virtual void CountCpu();
	virtual void CountMemInfo();
	virtual void CountCurProcessInfo();
	virtual void CountSystemInfo();
	virtual void CountOsInfo();
private:
	NFProcessInfo mCurProcessInfo;
	uint32_t mCpuCount = 1;
	NFMemInfo mMachineMemInfo; //当前物理机子的内存信息
	NFOsInfo mMachineOsInfo;
};
