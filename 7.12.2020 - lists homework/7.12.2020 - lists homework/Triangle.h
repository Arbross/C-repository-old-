#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Triangle
{
public:
	Triangle(size_t& sideA, size_t& sideB, size_t& sideC);
	~Triangle();

	void print() const;
	double countArea() const;
	double countLength() const;

private:
	double sideA, sideB, sideC;
};

