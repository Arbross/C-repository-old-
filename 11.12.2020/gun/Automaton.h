#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "Store.h"
using namespace std;

class Automaton
{
public:
	Automaton() = default;

	void takeStore();
	void shoot();
private:
	Store stores;
};

