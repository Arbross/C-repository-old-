#include <iostream>
#include "Game.h"
#include "Bin.h"
using namespace std;

int main()
{
	Bin bin("test.dat");
	
	bin.addGame("gamemode", Game::Type::ACTION, 50);
	bin.addGame("gamemode1", Game::Type::ACTION, 50);
	bin.addGame("gamemode2", Game::Type::ACTION, 50);

	bin.printAll();
	return 0;
}