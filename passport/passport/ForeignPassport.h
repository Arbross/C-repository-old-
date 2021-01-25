#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Passport.h"
#include "Date.h"
#include "Visa.h"
using namespace std;

class ForeignPassport : public Passport
{
public:
	ForeignPassport(const string& PIB, const string& seria, const size_t& number);

	void addVisa(const string& nameOfACountry, const size_t& birthYear);
	virtual void enter() override;
	virtual void print() const override;
private:
	vector<Visa> visas;

	string PIB;
	string seria;
	size_t number;

	Date birth;
	Date give;
};

