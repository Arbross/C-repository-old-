#include "Train.h"
#include "Car.h"

Train::Train(const size_t& number, const size_t& countOfCars, const string& name)
	: number(number), countOfCars(countOfCars), name(name)
{
	for (size_t i = 0; i < countOfCars; i++)
	{
		cars[i] = Car();
	}
}

Train::Train(const Train& other)
{
	setName(other.name);
	setNumber(other.number);
	this->countOfCars = other.countOfCars;

	for (size_t i = 0; i < countOfCars; i++)
	{
		this->cars[i] = other.cars[i];
	}
}

void Train::setName(const string& name)
{
	this->name = name;
}

void Train::setNumber(const size_t& number)
{
	this->number = number;
}

string Train::getName() const
{
	return this->name;
}

size_t Train::getNumber() const
{
	return this->number;
}

size_t Train::getCountOfCars() const
{
	return this->countOfCars;
}

size_t Train::allCount() const
{
	size_t sum = 0;
	for (size_t i = 0; i < countOfCars; i++)
	{
		sum += cars[i].getCount();
	}

	return sum;
}

Car Train::maxCount() const
{
	Car max = cars[0];
	for (size_t i = 1; i < countOfCars; i++)
	{
		if (max.getCount() < cars[i].getCount())
		{
			max = cars[i];
		}
	}

	return max;
}

Car Train::minCount() const
{
	Car min = cars[0];
	for (size_t i = 1; i < countOfCars; i++)
	{
		if (min.getCount() > cars[i].getCount())
		{
			min = cars[i];
		}
	}

	return min;
}

void Train::print() const
{
	cout << "Name : " << getName() << "\n";
	cout << "Number : " << getNumber() << "\n";
	cout << "Count of cars : " << getCountOfCars() << "\n";

	cout << "Cars : ";
	for (size_t i = 0; i < countOfCars; i++)
	{
		cars[i].print();
		cout << ", ";
	}
	cout << "\n";

	cout << "All count : " << allCount() << "\n";
	cout << "Max count : " << maxCount().getTypeString() << "\n";
	cout << "Min count : " << minCount().getTypeString() << "\n";
}