#include "Rectangle.h"

Rectangle::Rectangle(size_t& sideA, size_t& sideB)
	: sideA(sideA), sideB(sideB)
{}

Rectangle::~Rectangle()
{
	sideA = 0;
	sideB = 0;
}

void Rectangle::print() const
{
	cout << "Side <a> : " << sideA << ", Side <b> : " << sideB << endl;
	cout << "Area : " << countArea() << endl;
	cout << "Length : " << countLength() << endl;
}

double Rectangle::countArea() const
{
	return this->sideA * this->sideB;
}

double Rectangle::countLength() const
{
	return (sideA + sideB) * 2;
}
