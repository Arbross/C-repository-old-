#pragma once
#include <iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle(size_t& sideA, size_t& sideB);
	~Rectangle();

	void print() const;
	void countArea(size_t& sideA, size_t& sideB);
	void countLength(size_t& sideA, size_t& sideB);

private:
	double sideA, sideB;
	double area;
	size_t length;
};

