#pragma once
#include <iostream>
#include <string>
#include "Archer.h"
#include "Range.h"
using namespace std;

class ArcherTower : public Archer, public Range
{
public:
	ArcherTower(const size_t& count = 0, const string & name = "Noname")
		: Archer(name, count), Range(name, count) {}

	virtual void shoot() override;
};

void ArcherTower::shoot()
{
	if (Archer::getCount() > 0)
	{
		cout << "Shoot is used. The name of it is " << Archer::getName() << " and count is " << Archer::getCount() << ", type is " << (typeid(ArcherTower).name() + 6) << "." << endl;
		int atmp = Archer::getCount() - 1;
		Archer::setCount(atmp);

		int rtmp = Range::getCount() - 1;
		Range::setCount(rtmp);
	}
	else {
		cout << "Count of amunition is too low." << endl;
	}
}
