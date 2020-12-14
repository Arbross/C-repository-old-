#pragma once
#include <iostream>
using namespace std;

class Circle
{
public:
	Circle(size_t& radius);
	~Circle();

	void print() const;
	void countArea(size_t& radius);
	void countLength(size_t& radius);

private:
	double radius;
	double area;
	size_t length;
};

