#include "Triangle.h"

Triangle::Triangle(size_t& sideA, size_t& sideB, size_t& sideC)
	: sideA(sideA), sideB(sideB), sideC(sideC)
{
	area = 0;
	length = 0;
}

Triangle::~Triangle()
{
	sideA = 0;
	sideB = 0;
	sideC = 0;

	area = 0;
	length = 0;
}

void Triangle::print() const
{
	cout << "Side <a> : " << sideA << ", Side <b> : " << sideB << ", Side <c> : " << sideC << endl;
	cout << "Area : " << area << endl;
	cout << "Length : " << length << endl;
}

void Triangle::countArea(size_t& sideA, size_t& sideB, size_t& sideC) const
{
	int p = (sideA + sideB + sideC) / 2;

	this->area = sqrt(p * ((p - sideA) * (p - sideB) * (p - sideC)));
}

void Triangle::countLength(size_t& sideA, size_t& sideB, size_t& sideC)
{
	this->length = sideA + sideB + sideC;
}
