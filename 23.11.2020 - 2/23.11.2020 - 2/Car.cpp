#include "Car.h"

size_t Train::MaxPersons() const
{
	int max = 0;

	for (int i = 0; i < trainsCount; i++)
	{
		if (max < train[i])
		{
			max = train[i];
		}
	}

	return max;
}

size_t Train::MinPersons() const
{
	int min = train[0];

	for (int i = 0; i < trainsCount; i++)
	{
		if (min > train[i])
		{
			min = train[i];
		}
	}

	return min;
}

void Train::Print() const
{
	cout << "Train id: " << this->trainID << endl;
	cout << "Name: " << this->name << endl;
	cout << "Type: " << train->randType << endl;
	cout << "Persons count: " << train->personsCount << endl;
}
