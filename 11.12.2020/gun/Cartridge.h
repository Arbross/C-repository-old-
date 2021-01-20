#pragma once
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

class Cartridge
{
public:
	Cartridge();

	bool shoot();
	size_t getUniqueID() const;
private:
	static bool isItAStartOfProgram;
	static size_t id;

	size_t counter = 0;
	size_t chance = 0;

	size_t isChance();
};

