#pragma once
#include <iostream>
#include <string>
#include "Shooter.h"
#include "ArcherTower.h"
using namespace std;

class Catapult : public Shooter
{
public:
	Catapult(const size_t& count = 0, const string& name = "Noname");

	virtual void shoot() override;
};

inline Catapult::Catapult(const size_t& count, const string& name)
{
	setName(name);
	setCount(count);
}

inline void Catapult::shoot()
{
	if (getCount() > 0)
	{
		cout << "Shoot is used. The name of it is " << getName() << " and count is " << getCount() << ", type is " << (typeid(Archer).name() + 6) << "." << endl;
		--count;
	}
	else {
		cout << "Count of amunition is too low." << endl;
	}
}
