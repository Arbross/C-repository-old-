#include <iostream>
#include "Fortress.h"
using namespace std;

int main()
{
	Fortress fortress(5, 5, 12, 80);
	fortress.shoot();
	fortress.shoot();
	fortress.shoot();
	fortress.shoot();
	fortress.shoot();
	fortress.shoot();
	fortress.checkForState();
	return 0;
}