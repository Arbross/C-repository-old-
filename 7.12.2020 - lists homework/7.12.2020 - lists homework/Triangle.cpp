#include "Triangle.h"

Triangle::Triangle(double& sideA, double& sideB, double& sideC)
	: sideA(sideA), sideB(sideB), sideC(sideC)
{}

Triangle::~Triangle()
{
	this->sideA = 0;
	this->sideB = 0;
	this->sideC = 0;
}

void Triangle::print() const
{
	cout << "Side <a> : " << this->sideA << ", Side <b> : " << this->sideB << ", Side <c> : " << this->sideC << endl;
	cout << "Area : " << countArea() << endl;
	cout << "Length : " << countLength() << endl;
}

double Triangle::countArea() const
{
	double p = (this->sideA + this->sideB + this->sideC) / 2;

	return sqrt(p * ((p - this->sideA) * (p - this->sideB) * (p - this->sideC)));
}

double Triangle::countLength() const
{
	return this->sideA + this->sideB + this->sideC;
}
