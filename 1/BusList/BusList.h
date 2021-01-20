#pragma once
#include <iostream>
#include "Bus.h"
#include "MyForwardList.h"
using namespace std;

class BusList
{
public:
	BusList() = default;

	void print() const;
private:
	MyForwardList<Bus> listOfTheBus;
	friend class AutoPark;
};

inline void BusList::print() const
{
	if (!(listOfTheBus.isEmpty()))
	{
		listOfTheBus.print();
	}
}
