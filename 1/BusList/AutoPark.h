#pragma once
#include <iostream>
#include "BusList.h"
using namespace std;

class AutoPark
{
public:
	AutoPark() = default;

	void buyBus(const Bus& other);
	void sellBus(const size_t& index);

	void onRace(const Bus& other);
	void onAutoPark(const Bus& other);

	void print() const;
private:
	BusList autoPark;
	BusList way;
};

