#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Game.h"
using namespace std;

class Bin
{
public:
	Bin(const string& fname);

	void printAll() const;
	void addGame(const char* name, const Game::Type type, const int popularity);

	Game& find(const char* name);
	Game& find(const Game::Type type);
	void erase(const char* name);
	bool equal(const char* first, const char* second);
	bool equal(const Game::Type first, const Game::Type second);
	void clear();
	void edit(const size_t& number);
private:
	string fname;
	vector<Game> vec;
};

