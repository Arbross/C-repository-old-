#include "Circle.h"

Circle::Circle(size_t& radius)
	: radius(radius)
{
	area = 0;
	length = 0;
}

Circle::~Circle()
{
	radius = 0;
	area = 0;
	length = 0;
}

void Circle::print() const
{
	cout << "Radius : " << radius << endl;
	cout << "Area : " << area << endl;
	cout << "Length : " << length << endl;
}
