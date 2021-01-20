#include "AutoPark.h"

void AutoPark::buyBus(const Bus& other)
{
	autoPark.listOfTheBus.addTail(other);
}

void AutoPark::sellBus(const size_t& index)
{
	if (!(autoPark.listOfTheBus.isEmpty()))
	{
		way.listOfTheBus.deleteByIndex(index);
	}
}

void AutoPark::onRace(const Bus& other)
{
	way.listOfTheBus.pushFront(other);
	autoPark.listOfTheBus.deleteByNumber(other.getNumber());
}

void AutoPark::onAutoPark(const Bus& other)
{
	autoPark.listOfTheBus.pushFront(other);
	way.listOfTheBus.deleteByNumber(other.getNumber());
}

void AutoPark::print() const
{
	cout << "AutoPark : \n"; autoPark.print();
	cout << "In Race : \n"; way.print();
}
