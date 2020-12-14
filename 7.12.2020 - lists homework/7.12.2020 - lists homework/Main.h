#pragma once
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>
#include <initializer_list>
using namespace std;

class Main
{
public:
	//Main(const std::initializer_list<Triangle>& list);

	size_t maxArea(initializer_list<Triangle>& list);
	

private:
	Triangle triangle;
	Rectangle rectangle;
	Circle circle;
};

