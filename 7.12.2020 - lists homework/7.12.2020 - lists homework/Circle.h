#pragma once
#include <iostream>
using namespace std;

class Circle
{
public:
	Circle(size_t& radius);
	~Circle();

	void print() const;
	double countArea() const;
	double countLength() const;
	double getRadius() const;

private:
	double radius;
};

