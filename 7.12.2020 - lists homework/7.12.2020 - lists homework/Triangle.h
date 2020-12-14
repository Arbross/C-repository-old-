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
	void countArea(size_t& sideA, size_t& sideB, size_t& sideC) const;
	void countLength(size_t& sideA, size_t& sideB, size_t& sideC);

private:
	double sideA, sideB, sideC;
	double area;
	size_t length;
};

