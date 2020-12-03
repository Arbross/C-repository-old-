#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Train
{
public:
	Train(size_t trainID, string name, const size_t trainsCount) : trainID(trainID), name(name), trainsCount(trainsCount) {};
	~Train();

	void setTrainID(size_t& trainID);
	void setName(string& name);



	size_t getTrainID();
	string getName();

	size_t MaxPersons() const;
	size_t MinPersons() const;
	size_t t_FindAllPlaces() const;

	// size_t a_FindAllPlaces() const;
	// size_t a_FindAllCars() const;

	// size_t a_FindNumberOfTrainWithMaxPlaces() const;
	// size_t a_FindNumberOfTrainWithMinPlaces() const;

	void Print() const;
private:
	size_t trainID;
	string name;

	const size_t trainsCount;
	Car* train = new Car[trainsCount];
};

inline void Train::setTrainID(size_t& trainID) { this->trainID = trainID; }
inline void Train::setName(string& name) { this->name = name; }
inline size_t Train::getTrainID() { return this->trainID; }
inline string Train::getName() { return this->name; }

class Car
{
public:
	Car() : personsCount(0) {};
	~Car();

	size_t GetPersonsCount() const;
	void SetPersonsCount(size_t personsCount);

	
private:
	enum carType { COMPARTAMENT = 0, SEATCAR = 1, SLEEPING = 2, LAST = 9 };
	carType randType = static_cast<carType>(rand() % LAST);

	size_t personsCount;
};

inline size_t Car::GetPersonsCount() const { return personsCount; }
inline void Car::SetPersonsCount(size_t personsCount) { this->personsCount = personsCount; }

/*inline void Car::SetCarsCount(size_t carsCount, size_t maxPlaces[3])
{
	if (maxPlaces[typeCar] == )
	{
		this->carsCount = carsCount;
	}
}*/


