#include "Car.h"

const size_t Car::countOfMaxPlaces[] = { 24, 64, 54 };

Car::Car()
{
	isTypeOfACar = typeOfACar::LAST;
	countPlaces = 0;

	isTypeOfACar = (typeOfACar)(rand() % ((size_t)typeOfACar::SLEEPING + 1));
	countPlaces = rand() % (countOfMaxPlaces[(size_t)isTypeOfACar] + 1);
}

void Car::print() const
{
	cout << "Car type: " << getTypeString() << "\n";
	cout << "Count passengers: " << getCount() << "\n";
}

const char* Car::getTypeString() const
{
	static const char* typeInString[] { "COMPARTMENT", "PLACCART", "SLEEPING", "LAST" };
	return typeInString[(size_t)isTypeOfACar];
}

const size_t& Car::getCount() const
{
	return countPlaces;
}