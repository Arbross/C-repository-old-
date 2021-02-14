#pragma once
#include <iostream>
#include <string>
#include "Shooter.h"
#include "ArcherTower.h"
using namespace std;

class Archer : public Shooter
{
public:
	Archer(const string& name = "Noname", const size_t& count = 0);

	virtual void shoot() override;
};

inline Archer::Archer(const string& name, const size_t& count)
{
	setName(name);
	setCount(count);
}

inline void Archer::shoot()
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
