#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	Car(size_t& size);
	~Car();

	string getCarTypeString() const;
	size_t getCarNums() const;

	void Print() const;
private:
	enum carType { COMPARTAMENT = 0, SEATCAR = 1, SLEEPING = 2, LAST };
	carType randType;

	size_t carNums[3]{ 24, 54, 64 };
	size_t size;

	void setCarNums();
};




