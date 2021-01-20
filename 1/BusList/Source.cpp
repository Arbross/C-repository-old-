#include <iostream>
#include "AutoPark.h"
using namespace std;

int main()
{
	AutoPark new_autopark;

	new_autopark.buyBus(Bus(1, "PIB", 1));
	new_autopark.buyBus(Bus(2, "PIB", 2));
	new_autopark.buyBus(Bus(3, "PIB", 3));
	new_autopark.sellBus(1);
	new_autopark.print();

	new_autopark.onAutoPark(Bus(2, "PIB", 2));
	new_autopark.onRace(Bus(3, "PIB", 3));
	return 0;
}