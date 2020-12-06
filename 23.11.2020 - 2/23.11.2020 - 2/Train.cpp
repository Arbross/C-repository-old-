#include "Train.h"

Train::Train(string& name, size_t& size, Car* car)
	: name(name), size(size), car()
{
	for (int i = 0; i < size; i++)
	{
		car = new Car[i];
	}
}

Train::Train(const Train& other)
{
	if (this != &other)
	{
		this->size = other.size;
		this->name = other.name;
		this->trainID = other.trainID;

		this->car = new Car[other.size];

		for (int i = 0; i < other.size; i++)
		{
			this->car[i] = other.car[i];
		}
	}
}

Train::~Train()
{
	delete[] car;
	car = nullptr;
}

size_t Train::MaxPersons() const
{
	int max = car[0].getCarNums();

	for (int i = 0; i < size; i++)
	{
		if (max < car[i].getCarNums())
		{
			max = car[i].getCarNums();
		}
	}

	return max;
}

size_t Train::MinPersons() const
{
	int min = car[0].getCarNums();

	for (int i = 0; i < size; i++)
	{
		if (min > car[i].getCarNums())
		{
			min = car[i].getCarNums();
		}
	}

	return min;
}

size_t Train::AllPersons() const
{
	int temp = 0;

	for (size_t i = 0; i < size; i++)
	{
		temp += car[i].getCarNums();
	}

	return temp;
}

size_t Train::MaxNum() const
{
	int max = 0;

	for (int i = 0; i < size; i++)
	{
		if (max < car[i].getCarNums())
		{
			max = i;
		}
	}

	return max;
}

size_t Train::MinNum() const
{
	int min = car[0].getCarNums();

	for (int i = 0; i < size; i++)
	{
		if (min > car[i].getCarNums())
		{
			min = i;
		}
	}

	return min;
}

void Train::Print() const
{
	cout << "ID : " << this->trainID << endl;
	cout << "Name : " << name << endl;
	cout << "Count of cars : " << size << endl;
	
	car->Print();
}
