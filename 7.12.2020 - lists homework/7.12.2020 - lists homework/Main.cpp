#include "Main.h"

double Main::maxArea(std::initializer_list<Triangle>& list)
{
	double max = 0;

	for (auto& elem : list)
	{
		if (max < elem.countArea())
		{
			max = elem.countArea();
		}
	}

	return max;
}

Circle Main::maxOfRadius(initializer_list<Circle>& list, double num)
{
	for (auto& elem : list)
	{
		if (elem.getRadius() < num)
		{
			return this->circle;
		}
		else if (elem.getRadius() == 0)
		{
			return this->circle;
		}
		else {
			continue;
		}
	}
}
