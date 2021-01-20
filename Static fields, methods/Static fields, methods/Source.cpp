#include <iostream>
#include "Water.h"
using std::boolalpha;
using std::cout;
using std::endl;

int main()
{
	Water water("Walen", 5, 5, 5);
	Water new_water("Walen", 5, 5, 5);

	water.countSquare();
	water.countVolume();

	cout << "Bool : " << boolalpha << water.areTheyTheSame(water, new_water) << endl;

	Water arr[5];
	cout << "Max square : " << water.findMaxSquareType(arr, 5, 0) << endl;
	cout << "isEqueal : " << water.isEqueal(water, new_water) << endl;

	return 0;
}