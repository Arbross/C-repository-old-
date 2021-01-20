#include "Main.h"

Main::Main(Triangle triangle, Rectangle rectangle, Circle circle)
	: triangle(triangle), rectangle(rectangle), circle(circle)
{}

double Main::maxArea(std::initializer_list<Triangle> list)
{
	double max = 0;

	for (const auto& elem : list)
	{
		if (max < elem.countArea())
		{
			max = elem.countArea();
		}
	}

	return max;
}

Circle Main::maxOfRadius(const initializer_list<Circle> list, const double num)
{
	for (const auto& elem : list)
	{
		if (elem.getRadius() < num)
		{
			return elem;
		}
		else if (elem.getRadius() == 0)
		{
			return elem;
		}
		else {
			cerr << "Ups..." << endl;
		}
	}
}
