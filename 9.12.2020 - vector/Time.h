#pragma once
#include <iostream>
#include <string>
using namespace std;

class Time
{
public:
	Time(const size_t& hour = 0, const size_t& min = 0);

	size_t getHour() const;
	size_t getMin() const;

	void setHour(const size_t& hour);
	void setMin(const size_t& min);
private:
	size_t hour;
	size_t min;
};

inline Time::Time(const size_t& hour, const size_t& min)
//	: hour(hour), min(min)
{
	setHour(hour);
	setMin(min);
}

inline size_t Time::getHour() const
{
	return this->hour;
}

inline size_t Time::getMin() const
{
	return this->min;
}

inline void Time::setHour(const size_t& hour)
{
	if (hour >= 0 && hour < 24)
	{
		this->hour = hour;
	}
	else {
		exit(0);
	}
}

inline void Time::setMin(const size_t& min)
{
	if (min >= 0 && min < 60)
	{
		this->min = min;
	}
	else {
		exit(0);
	}
}
