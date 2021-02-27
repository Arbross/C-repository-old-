#pragma once
#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <algorithm>
#include "Application.h"
using namespace std;

class Menu
{
public:
	Menu();

	void add(const string& finalPoint = "NoFinalPoint", const size_t& number = 0, const string& PIB = "NOPIB", const size_t& day = 0, const size_t& month = 0, const size_t& year = 0);
	void add(const size_t& pos = 0, const string& finalPoint = "NoFinalPoint", const size_t& number = 0, const string& PIB = "NOPIB", const size_t& day = 0, const size_t& month = 0, const size_t& year = 0);

	void erase(const size_t& value);

	void print(const size_t& day = 0, const size_t& month = 0, const size_t& year = 0, const size_t& number = 0) const;
	void printAll() const;

	size_t countOfAllApplications() const;

	void sort();
	void save(const string& fname);
	void load(const string& fname);
private:
	list<Application> application;
};

