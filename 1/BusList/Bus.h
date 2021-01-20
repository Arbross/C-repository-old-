#pragma once
#include <iostream>
#include <string>
using namespace std;

class Bus
{
public:
	Bus() = default;
	Bus(const size_t number, const string PIB, const size_t numberOfRoute);	

	size_t getNumber() const;

	const bool operator==(const Bus& other);
	const bool operator!=(const Bus& other);
	friend ostream& operator<< (ostream& out, const Bus& other);

	void print() const;
private:
	size_t number = 0;
	string PIB = "NoPIB";
	size_t numberOfRoute = 0;
};

