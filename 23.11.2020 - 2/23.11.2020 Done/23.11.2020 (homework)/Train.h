#pragma once
#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

class Train
{
public:
	Train(const size_t& number = 0, const size_t& countOfCars = 0, const string& name = "Noname");
	Train(const Train& other);

	string getName() const;
	size_t getNumber() const;
	size_t getCountOfCars() const;

	size_t allCount() const;
	Car maxCount() const;
	Car minCount() const;

	void print() const;
private:
	Car* cars = new Car[countOfCars];

	size_t number;
	size_t countOfCars;
	string name;

	void setName(const string& countOfCars);
	void setNumber(const size_t& number);
};