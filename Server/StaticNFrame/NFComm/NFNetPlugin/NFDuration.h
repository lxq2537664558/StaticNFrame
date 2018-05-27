// -------------------------------------------------------------------------
//    @FileName         :    NFDuration.h
//    @Author           :    GaoYi
//    @Date             :    2018/05/26
//    @Email			:    445267987@qq.com
//    @Module           :    NFCore
//
// -------------------------------------------------------------------------
#pragma once

#include "NFComm/NFCore/NFPlatform.h"

#include "NFLibEvent.h"


// A Duration represents the elapsed time between two instants
// as an int64 nanosecond count. The representation limits the
// largest representable duration to approximately 290 years.
class NFDuration
{
public:
#if NF_PLATFORM == NF_PLATFORM_WIN
	static const int64_t kNanosecond; // = 1LL
	static const int64_t kMicrosecond;// = 1000
	static const int64_t kMillisecond;// = 1000 * kMicrosecond
	static const int64_t kSecond; // = 1000 * kMillisecond
	static const int64_t kMinute; // = 60 * kSecond
	static const int64_t kHour; // = 60 * kMinute
#else
	static const int64_t kNanosecond = 1LL;
	static const int64_t kMicrosecond = 1000;
	static const int64_t kMillisecond = 1000 * kMicrosecond;
	static const int64_t kSecond = 1000 * kMillisecond;
	static const int64_t kMinute = 60 * kSecond;
	static const int64_t kHour = 60 * kMinute;
#endif
public:
	NFDuration() : ns_(0) { }
	explicit NFDuration(const struct timeval& t);
	explicit NFDuration(int64_t nanoseconds);
	explicit NFDuration(double seconds);

	// Nanoseconds returns the duration as an integer nanosecond count.
	int64_t Nanoseconds() const { return ns_; }

	// These methods return double because the dominant
	// use case is for printing a floating point number like 1.5s, and
	// a truncation to integer would make them not useful in those cases.

	// Seconds returns the duration as a floating point number of seconds.
	double Seconds() const;

	double Milliseconds() const;
	double Microseconds() const;
	double Minutes() const;
	double Hours() const;

	struct timeval TimeVal() const;
	void To(struct timeval* t) const
	{
		t->tv_sec = (long)(ns_ / NFDuration::kSecond);
		t->tv_usec = (long)(ns_ % NFDuration::kSecond) / (long)NFDuration::kMicrosecond;
	}

	bool IsZero() const;
	bool operator<(const NFDuration& rhs) const;
	bool operator<=(const NFDuration& rhs) const;
	bool operator>(const NFDuration& rhs) const;
	bool operator>=(const NFDuration& rhs) const;
	bool operator==(const NFDuration& rhs) const;

	NFDuration operator+=(const NFDuration& rhs);
	NFDuration operator-=(const NFDuration& rhs);
	NFDuration operator*=(int ns);
	NFDuration operator/=(int ns);

private:
	int64_t ns_; // nanoseconds
};



