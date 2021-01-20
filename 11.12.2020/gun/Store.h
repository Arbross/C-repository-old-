#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "Cartridge.h"
using namespace std;

class Store
{
public:
	Store();

	bool load();
	Cartridge* troughUpper() const;
	void topPlusPlus();
	size_t getUniqueID() const;
private:
	Cartridge* cartridges = nullptr;
	size_t top;
};

inline Store::Store()
{
	cartridges = new Cartridge[30];
	top = -1;
}

inline bool Store::load()
{
	++top;
	if (top < 30 && top >= 0)
	{
		if (cartridges[top].shoot() == true)
		{
			return true;
		}
		else {
			return false;
		}
	}
	else {
		exit(0);
	}
}

inline Cartridge* Store::troughUpper() const
{
	return &cartridges[top];
}

inline void Store::topPlusPlus()
{
	++top;
}

inline size_t Store::getUniqueID() const
{
	return cartridges[top].getUniqueID();
}
