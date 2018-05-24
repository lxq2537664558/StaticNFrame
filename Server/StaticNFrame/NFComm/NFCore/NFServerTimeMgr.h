// -------------------------------------------------------------------------
//    @FileName         :    NFServerTimeMgr.h
//    @Author           :    GaoYi
//    @Date             :    2017-04-01
//    @Email			:    445267987@qq.com
//    @Module           :    NFCore
//
// -------------------------------------------------------------------------

#pragma once

#include "NFSingleton.hpp"
#include "NFPlatform.h"

#define MILLISECOND 1000.0f   // 秒和毫秒换算的单位
#define GAME_FPS    NFServerTime::GetFPS()

class _NFExport NFServerTimeMgr : public NFSingleton<NFServerTimeMgr>
{
public:
	NFServerTimeMgr();
	virtual ~NFServerTimeMgr();
public:
	static bool Init(int fps);
	static bool UnInit();
	static bool Update(uint64_t tick);

public:
	static uint64_t StartTick()
	{
		return ms_startTick;
	}

	static uint32_t CurElapse()
	{
		return static_cast<uint32_t>(ms_curTick - ms_startTick);
	}

	static uint64_t Tick()
	{
		return ms_curTick;
	}

	static uint64_t LastTick()
	{
		return ms_lastTick;
	}

	static int DeltaTick()
	{
		return ms_deltaTick;
	}

	static uint64_t UnixSec()
	{
		return ms_unixSec;
	}

	static uint64_t Frames()
	{
		return ms_frames;
	}

	static uint64_t Secs()
	{
		return ms_secs;
	}

	static int GetFPS()
	{
		return ms_fps;
	}

	// 获得当日已过秒数(首日有16小时要去除)
	static uint32_t CurDaySec()
	{
		return (static_cast<uint32_t>(UnixSec()) - 57600) % DayTotalSec();
	};

	// 每日总秒数
	static uint32_t DayTotalSec()
	{
		return msc_daySec;
	};

	static bool CheckPerFrames(int perFrames)
	{
		return ms_frames % perFrames == 0;
	}

	static bool CheckPerSecs(int perSecs)
	{
		return ms_secs % perSecs == 0 && ms_perSecFirstFrame;
	}

protected:
	static uint64_t ms_startTick;
	static uint64_t ms_curTick; // 1 tick = 1 msec, cur update tick
	static uint64_t ms_lastTick; // 1 tick = 1 msec, last update tick
	static int ms_deltaTick; // 1 tick = 1 msec, ms_curTick - ms_lastTick
	static uint64_t ms_unixSec; // cur unix sec(cur frame is same)
	static uint64_t ms_frames; // frames count, from app start
	static uint64_t ms_secs; // seconds count, from app start
	static bool ms_perSecFirstFrame; // per sec the first frame is true
	static int ms_fps; // fps
	static const uint32_t msc_daySec = 86400; // day total sec

private:
	static uint64_t ms_lastUnixSec; // last unix sec
};

