#include <iostream>
#include "Train.h"
#include <ctime>
using namespace std;

int main()
{
	Train train(5, 5, "Mersedes");
	
	train.allCount();
	train.maxCount();
	train.minCount();
	train.print();

	return 0;
}