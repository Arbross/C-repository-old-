#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Triangle
{
public:
	Triangle(double& sideA, double& sideB, double& sideC);
	~Triangle();

	void print() const;
	double countArea() const;
	double countLength() const;

private:
	double sideA, sideB, sideC;
};

