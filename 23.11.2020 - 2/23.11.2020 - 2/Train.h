#pragma once
#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

class Train
{
public:
	//Train(string& name, size_t& size, Car* car);
	//Train() = default;
	Train(const Train& other);
	~Train();

	size_t MaxPersons() const;
	size_t MinPersons() const;
	size_t AllPersons() const;

	size_t MaxNum() const;
	size_t MinNum() const;

	string getName() const;
	size_t getSize() const;
	size_t getTrainID() const;

	void Print() const;

private:
	Car* car = new Car[size];

	static size_t trainID;
	string name;
	size_t size;
};

inline string Train::getName() const
{
	return this->name;
}

inline size_t Train::getSize() const
{
	return this->size;
}

inline size_t Train::getTrainID() const
{
	return this->trainID;
}



