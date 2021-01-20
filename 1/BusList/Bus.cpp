#include "Bus.h"

Bus::Bus(const size_t number, const string PIB, const size_t numberOfRoute)
	: number(number), PIB(PIB), numberOfRoute(numberOfRoute) {}

size_t Bus::getNumber() const { return number; }

const bool Bus::operator ==(const Bus& other)
{
	if (number != other.number && numberOfRoute != other.numberOfRoute && PIB != other.PIB)
	{
		return false;
	}

	return true;
}
const bool Bus::operator !=(const Bus& other) { return *this != other; }

ostream& operator <<(ostream& out, const Bus& other)
{
	other.print();
	return out;
}

void Bus::print() const
{
	cout << "\n";
	cout << "Number : " << number << "\n";
	cout << "PIB : " << PIB << "\n";
	cout << "Number of route : " << numberOfRoute << "\n";
	cout << "\n";
}
