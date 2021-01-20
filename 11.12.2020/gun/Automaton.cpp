#include "Automaton.h"

void Automaton::takeStore()
{
	stores.topPlusPlus();
}

void Automaton::shoot()
{
	if (stores.load() == true)
	{
		cout << "Автомат вистрелив кулю " << stores.getUniqueID() << ", та влучив." << endl;
	}
	else {
		cout << "Автомат вистрелив кулю " << stores.getUniqueID() << ", та промахнувся." << endl;
	}
}
