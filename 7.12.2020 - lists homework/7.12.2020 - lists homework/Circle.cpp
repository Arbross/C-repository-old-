#include "Circle.h"

Circle::Circle(size_t& radius)
	: radius(radius)
{}

Circle::~Circle()
{
	radius = 0;
}

void Circle::print() const
{
	cout << "Radius : " << radius << endl;
	cout << "Area : " << countArea() << endl;
	cout << "Length : " << countLength() << endl;
}

double Circle::countArea() const
{
	const float pi = 3.14;
	return pi * (radius * radius);
}

double Circle::countLength() const
{
	const float pi = 3.14;
	return 2 * (pi * radius);
}

double Circle::getRadius() const
{
	return this->radius;
}
