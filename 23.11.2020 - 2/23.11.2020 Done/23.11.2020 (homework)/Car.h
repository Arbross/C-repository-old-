#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	Car();
	
	const char* getTypeString() const;
	const size_t& getCount() const;

	void print() const;
private:
	enum class typeOfACar { COMPARTMENT, PLACCART, SLEEPING, LAST };

	size_t countPlaces;
	typeOfACar isTypeOfACar;
	const static size_t countOfMaxPlaces[];
};