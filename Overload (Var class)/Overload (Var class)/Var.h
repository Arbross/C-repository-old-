#pragma once
#include <iostream>
#include <string>
using namespace std;

typedef class var
{
public:
	var();
	var(const int int_var);
	var(const double double_var);
	var(const char string_var[]);

	bool operator <(const var& other);
	bool operator <=(const var& other);
	bool operator >(const var& other);
	bool operator >=(const var& other);
	bool operator ==(const var& other);
	bool operator !=(const var& other);

	var operator +(const var& other);
	var operator -(const var& other);
	var operator *(const var& other);
	var operator /(const var& other);
	var operator +=(const var& other);
	var operator -=(const var& other);
	var operator *=(const var& other);
	var operator /=(const var& other);

	friend ostream& operator <<(ostream& os, const var& other);

private:
	int int_var;
	double double_var;
	string string_var;
};
