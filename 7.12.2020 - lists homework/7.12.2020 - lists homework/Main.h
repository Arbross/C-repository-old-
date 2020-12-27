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
	Main();

	double maxArea(initializer_list<Triangle>& list);

	template <typename T>
	void print(initializer_list<T>& list);
	
	Circle maxOfRadius(initializer_list<Circle>& list, double num);

	template <typename T>
	tuple<int, int, int> maxOfAreaCount(initializer_list<T>& list, int num);
private:
	Triangle triangle;
	Rectangle rectangle;
	Circle circle;
};

template<typename T>
inline void Main::print(initializer_list<T>& list)
{
	int i = 0;

	for (auto& elem : list)
	{
		cout << "Id: " << i << endl;
		elem.print();
		cout << endl;
	}
}

template<typename T>
inline tuple<int, int, int> Main::maxOfAreaCount(initializer_list<T>& list, int num)
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

	return make_tuple(tempMin, tempMax, tempEqueal);
}
