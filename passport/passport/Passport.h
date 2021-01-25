#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Passport
{
public:
	Passport(const string& PIB, const string& seria, const size_t& number);

	virtual string getPIB() const;
	virtual string getSeria() const;
	virtual size_t getNumber() const;
	virtual void getBirth() const;
	virtual void getGive() const;

	virtual void setPIB(const string& PIB);
	virtual void setSeria(const string& seria);
	virtual void setNumber(const size_t& number);
	virtual void setBirth();
	virtual void setGive();

	virtual void enter();
	virtual void print() const;
private:
	string PIB;
	string seria;
	size_t number;

	Date birth;
	Date give;
};

