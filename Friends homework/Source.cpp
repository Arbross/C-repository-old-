#include <iostream>
#include "TV.h"
#include "Controller.h"
using namespace std;

int main()
{
	Controller con;


	con.power();
	con.goToChannel(53);
	con.Print();





	return 0;
}