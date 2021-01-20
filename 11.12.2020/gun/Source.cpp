#include <iostream>
#include <ctime>
#include "Automaton.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "UKR");
	srand(unsigned(time(NULL)));

	Automaton automaton;

	for (size_t i = 0; i < 30; i++)
	{
		automaton.shoot();
	}
	
	// Exit when out of range (30)
	cout << "Out of range." << endl;
	automaton.shoot();
	
	automaton.takeStore();
	return 0;
}