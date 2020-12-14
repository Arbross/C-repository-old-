#include "Rectangle.h"

Rectangle::Rectangle(size_t& sideA, size_t& sideB)
	: sideA(sideA), sideB(sideB)
{
	area = 0;
	length = 0;
}

Rectangle::~Rectangle()
{
	sideA = 0;
	sideB = 0;

	area = 0;
	length = 0;
}

void Rectangle::print() const
{
	cout << "Side <a> : " << sideA << ", Side <b> : " << sideB << endl;
	cout << "Area : " << area << endl;
	cout << "Length : " << length << endl;
}

void Rectangle::countArea(size_t& sideA, size_t& sideB)
{
	this->area = sideA * sideB;
}

void Rectangle::countLength(size_t& sideA, size_t& sideB)
{
	this->length = (sideA + sideB) * 2;
}
