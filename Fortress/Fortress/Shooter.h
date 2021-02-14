#pragma once
#include <iostream>
#include <string>
using namespace std;

class Shooter abstract
{
public:
	Shooter(const string& name = "Noname", const size_t& count = 0);

	virtual string getName() const;
	virtual size_t getCount() const;

	virtual void setName(const string& name);
	virtual void setCount(const size_t& count);

	virtual void shoot();
	virtual void giveAmunition(const size_t& count);
protected:
	string name;
	size_t count;
};

inline Shooter::Shooter(const string& name, const size_t& count)
{
	setName(name);
	setCount(count);
}

inline string Shooter::getName() const
{
	return name;
}

inline size_t Shooter::getCount() const
{
	return count;
}

inline void Shooter::shoot()
{
	if (getCount() > 0)
	{
		cout << "Shoot is used. The name of it is " << getName() << " and count of it " << getCount() << "." << endl;
		--count;
	}
	else {
		cout << "Count of amunition is too low." << endl;
	}
}

inline void Shooter::giveAmunition(const size_t& count)
{
	setCount(count);
}

inline void Shooter::setName(const string& name)
{
	this->name = name;
}

inline void Shooter::setCount(const size_t& count)
{
	this->count = count;
}
