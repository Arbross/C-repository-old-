#include <iostream>
#include "Main.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main()
{
	size_t size = 5;
	double size1 = 5;
	Circle circle(size);
	Rectangle rec(size, size);
	Triangle tri(size1, size1, size1);

	Main* right;

	right->maxArea({tri});
	right->maxOfRadius({circle}, 6);
	right->maxOfAreaCount({tri}, 6);
	right->show({ circle });

	return 0;
}