#pragma once
#include <iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle(size_t& sideA, size_t& sideB);
	~Rectangle();

	void print() const;
	double countArea() const;
	double countLength() const;

private:
	double sideA, sideB;
};

