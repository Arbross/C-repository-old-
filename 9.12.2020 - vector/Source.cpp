#include <iostream>
#include "RailWay.h"
using std::cout;
using std::endl;

int main()
{
	setlocale(LC_ALL, "");

	RailWay railWay;
	RailWay _railWay;
	railWay.add(5, "Monako", 12, 45);
	railWay.add(6, "Rio", 1, 46);
	railWay.add(7, "New York", 3, 47);
	railWay.add(8, "Rivne", 7, 48);
	railWay.add(9, "Mars", 1, 49);
	railWay.add(10, "Uknown", 0, 41);
	railWay.add(11, "Kiev", 9, 42);

	//railWay.printOnce(0);

	railWay.printAll();

	railWay.sorter();
	cout << endl;

	railWay.printAll();


	return 0;
}