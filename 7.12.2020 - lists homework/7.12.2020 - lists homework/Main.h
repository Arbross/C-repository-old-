#pragma once
#include <iostream>
#include <tuple>
#include <initializer_list>

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

class Main
{
public:
	Main(Triangle triangle, Rectangle rectangle, Circle circle);
	Main() = default;

	static double maxArea(std::initializer_list<Triangle> list);

	template <typename T>
	static void show(const initializer_list<T>& list);
	
	static Circle maxOfRadius(const initializer_list<Circle> list, const double num);

	template <typename T>
	static tuple<int, int, int> maxOfAreaCount(const initializer_list<T> list, const int num);
private:
	Triangle triangle;
	Rectangle rectangle;
	Circle circle;
};

template<typename T>
inline void Main::show(const initializer_list<T>& list)
{
	for (const auto& elem : list)
	{
		elem.print();
	}
}

template<typename T>
inline tuple<int, int, int> Main::maxOfAreaCount(const initializer_list<T> list, const int num)
{
	int tempMin = 0, tempMax = 0, tempEqueal = 0;

	for (const auto& elem : list)
	{
		if (elem.countArea() > num)
		{
			++tempMax;
		}
		else if (elem.countArea() < num)
		{
			++tempMin;
		}
		else if (elem.countArea() == num)
		{
			++tempEqueal;
		}
	}

	return std::make_tuple(tempMin, tempMax, tempEqueal);
}
