#include "Cartridge.h"

bool Cartridge::isItAStartOfProgram = false;
size_t Cartridge::id = 0;

Cartridge::Cartridge()
{
	if (isItAStartOfProgram == false)
	{
		counter = rand() % 100;
		id = counter;
		counter = 0;

		isItAStartOfProgram = true;
	}

	counter = 1;
}

bool Cartridge::shoot()
{
	if (isChance() > 70)
	{
		id += counter;
		return true;
	}
	else {
		id += counter;
		return false;
	}
}

size_t Cartridge::getUniqueID() const
{
	return id;
}

size_t Cartridge::isChance()
{
	this->chance = rand() % 100;
	return chance;
}
