#pragma once
#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

class Train
{
public:
	Train(const size_t& number = 0, const string& destinationPlace = "No place", const size_t& hour = 0, const size_t& min = 0);

	void setNumber(const size_t& number);
	void setDestinationPlace(const string& destinationPlace);

	void setHour(const size_t& hour);
	void setMin(const size_t& min);

	size_t getHour() const;
	size_t getMin() const;

	bool operator <(const Train& other)
	{
		size_t t_timeInMin = (getHour() * 60) + getMin();
		size_t o_timeInMin = (other.getHour() * 60) + other.getMin();

		return t_timeInMin < o_timeInMin;
	}

	void print() const;
private:
	size_t number;
	string destinationPlace;
	Time arriveTime;
};

inline Train::Train(const size_t& number, const string& destinationPlace, const size_t& hour, const size_t& min)
{
	setNumber(number);
	setDestinationPlace(destinationPlace);
	arriveTime.setHour(hour);
	arriveTime.setMin(min);
}

inline void Train::setNumber(const size_t& number)
{
	this->number = number;
}

inline void Train::setDestinationPlace(const string& destinationPlace)
{
	this->destinationPlace = destinationPlace;
}

inline void Train::setHour(const size_t& hour)
{
	arriveTime.setHour(hour);
}

inline void Train::setMin(const size_t& min)
{
	arriveTime.setMin(min);
}

inline size_t Train::getHour() const
{
	return arriveTime.getHour();
}

inline size_t Train::getMin() const
{
	return arriveTime.getMin();
}

inline void Train::print() const
{
	cout << "Number : " << number << endl;
	cout << "Destination place : " << destinationPlace << endl;
	cout << "Hour : " << arriveTime.getHour() << ", Min : " << arriveTime.getMin() << endl;
}
