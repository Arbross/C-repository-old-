#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Train.h"
using namespace std;

class RailWay
{
public:
	void enter();
	void add(const size_t& number, const string& destinationPlace, const size_t& hour, const size_t& min);
	void erase(const size_t& number);
	void edit(const size_t& hour, const size_t& min, const string& destinationPlace, const size_t& number);
	void edit(const size_t& hour, const size_t& min, const size_t& number);
	void edit(const string& destinationPlace, const size_t& number);

	void printOnce(const size_t& number) const;
	void printAll() const;

	void sorter()
	{
		sort(trains.begin(), trains.end());
	}
private:
	vector<Train> trains;
};

inline void RailWay::enter()
{
	Train tmp;
	size_t count;

	cout << "Please enter count of trains : ";
	cin >> count;

	for (size_t i = 0; i < count; i++)
	{
		size_t number = 0, hour = 0, min = 0;
		string destinationPlace = "";

		cout << "Enter number : ";
		cin >> number;

		cout << "Enter destination place : ";
		cin >> destinationPlace;

		cout << "Enter hour : ";
		cin >> hour;

		cout << "Enter min : ";
		cin >> min;

		tmp.setNumber(number);
		tmp.setDestinationPlace(destinationPlace);
		tmp.setHour(hour);
		tmp.setMin(min);

		trains.push_back(tmp);
	}
}

void RailWay::add(const size_t& number, const string& destinationPlace, const size_t& hour, const size_t& min)
{
	trains.push_back(Train(number, destinationPlace, hour, min));
}

inline void RailWay::erase(const size_t& number)
{
	if (!trains.empty())
	{
		trains.erase(trains.begin() + number);
	}
}

inline void RailWay::edit(const size_t& hour, const size_t& min, const string& destinationPlace, const size_t& number)
{
	int i = 0;
	for (auto& elem : trains)
	{
		if (number == i)
		{
			elem.setHour(hour);
			elem.setMin(min);
			elem.setDestinationPlace(destinationPlace);
		}
		++i;
	}
}

inline void RailWay::edit(const size_t& hour, const size_t& min, const size_t& number)
{
	int i = 0;
	for (auto& elem : trains)
	{
		if (number == i)
		{
			elem.setHour(hour);
			elem.setMin(min);
		}
		++i;
	}
}

inline void RailWay::edit(const string& destinationPlace, const size_t& number)
{
	int i = 0;
	for (auto& elem : trains)
	{
		if (number == i)
		{
			elem.setDestinationPlace(destinationPlace);
		}
		++i;
	}
}

void RailWay::printOnce(const size_t& number) const
{
	if (!trains.empty())
	{
		size_t i = 0;

		for (const auto& elem : trains)
		{
			if (number == i)
			{
				elem.print();
			}
			++i;
		}
	}
}

void RailWay::printAll() const
{
	if (!trains.empty())
	{
		for (const auto& elem : trains)
		{
			elem.print();
		}
	}
}

//inline bool RailWay::comp(const RailWay& first, const RailWay& second) const
//{
//	return first.trains < second.trains;
//}
