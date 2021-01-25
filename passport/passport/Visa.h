#pragma once
#include <iostream>
#include "Date.h"
using namespace std;

class Visa
{
public:
	Visa(const string& nameOfACountry = "Noname", const size_t& birthYear = 0);
	
	void setNameOfACountry(const string& nameOfACountry);
	string getNameOfACountry() const;

	void print() const;
private:
	string nameOfACountry;
	Date give;
};

