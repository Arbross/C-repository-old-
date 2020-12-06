#include "Car.h"

Car::Car(size_t& size)
	: size(size)
{
	randType = static_cast<carType>(rand() % LAST);
}

string Car::getCarTypeString() const
{
	string temp;

	if (randType == 0)
	{
		return temp = "COMPARTAMENT";
	}
	else if (randType == 1)
	{
		return temp = "SEATCAR";
	}
	else if (randType == 2)
	{
		return temp = "SLEEPING";
	}
	else {
		return temp = "Error";
	}
}

size_t Car::getCarNums() const
{
	return this->carNums[size];
}

void Car::Print() const
{
	cout << "Type : " << getCarTypeString() << ", " << carNums[size] << endl;
}

void Car::setCarNums()
{
	if (randType == 0)
	{
		this->size = 0;
	}
	else if (randType == 1)
	{
		this->size = 1;
	}
	else if (randType == 2)
	{
		this->size = 2;
	}
	else {
		cout << "Error" << endl;
	}
}
