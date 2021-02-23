#include "Game.h"

Game::Game(const char* name, const Type type, const int popularity)
	: type(type), popularity(popularity)
{
	strcpy_s(this->name, name);
}

void Game::print() const
{
	cout << "Name : " << name << ",\tType : " << (int)type << ",\tPopularity : " << popularity << endl;
}
