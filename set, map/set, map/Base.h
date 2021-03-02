#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
using namespace std;

class Base
{
public:
	void save(const string& fname = "test.dat");
	void load(const string& fname = "test.dat");

	multimap<string, vector<string>>::iterator find1(const string& town = "No town");

	void setTown(const string& country, const string& town, const string& new_town);
	vector<string>& getTowers(const string& country)
	{
		return (*find1(country)).second;
	}


	void add(const string& country = "No country", const string& town = "No town");
	void erase(const string& country = "No country", const string& town = "No town");

	size_t countOfTowns();

	void printCountries() const;
	void print() const;
private:
	multimap<string, vector<string>> map;
};

