#include "Water.h"

size_t Water::countOfWaters = 0;

Water::Water(const string name, const size_t width, const size_t length, const size_t maxHeight)
	: name(name), width(width), length(length), maxHeight(maxHeight)
{
	++id;
	countOfWaters = id;
	generateRandomEnum();
	setTypeOfWater();
}

std::string Water::getName() const
{
	return name;
}

std::string Water::getTypeOfWater() const
{
	return stringType[sizeCurrently];
}

size_t Water::getWidth() const
{
	return width;
}

size_t Water::getLength() const
{
	return length;
}

size_t Water::getMaxHeight() const
{
	return maxHeight;
}

void Water::setName(string name)
{
	this->name = name;
}

void Water::setWidth(size_t width)
{
	this->width = width;
}

void Water::setLength(size_t length)
{
	this->length = length;
}

void Water::setMaxHeight(size_t maxHeight)
{
	this->maxHeight = maxHeight;
}

size_t Water::countVolume() const
{
	size_t tmp = width * length * maxHeight;
	return tmp;
}

size_t Water::countSquare() const
{
	size_t tmp = width * length;
	return tmp;
}

void Water::setTypeOfWater()
{
	if ((size_t)isType == 0)
	{
		sizeCurrently = 0;
	}
	else if ((size_t)isType == 1)
	{
		sizeCurrently = 1;
	}
	else {
		sizeCurrently = 2;
	}
}

void Water::generateRandomEnum()
{
	isType = static_cast<type>(rand() % LAST);
}

bool Water::areTheyTheSame(const Water& first, const Water& second)
{
	if (first.sizeCurrently == second.sizeCurrently)
	{
		return true;
	}
	else {
		return false;
	}
}

int Water::isEqueal(const Water& first, const Water& second)
{
	int tmp = 0;

	if (first.countSquare() > second.countSquare())
	{
		return tmp = 1;
	}
	else if (first.countSquare() < second.countSquare())
	{
		return tmp = -1;
	}
	else if (first.countSquare() == second.countSquare())
	{
		return tmp;
	}
}

size_t Water::findMaxSquareType(const Water first[], size_t size, size_t sizeCurrently)
{
	if (sizeCurrently >= 0 && sizeCurrently <= 2)
	{
		size_t max = 0;

		for (size_t i = 0; i < size; i++)
		{
			if (first[i].sizeCurrently == sizeCurrently)
			{
				if (first[i].countSquare() > max)
				{
					max = first[i].countSquare();
				}
			}
		}
	}
	else {
		return 0;
	}
}
