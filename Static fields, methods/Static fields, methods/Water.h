#pragma once
#include <iostream>
using std::string;

class Water
{
public:
	Water() = default;
	Water(const string name, const size_t width, const size_t length, const size_t maxHeight);

	string getName() const;
	string getTypeOfWater() const;
	size_t getWidth() const;
	size_t getLength() const;
	size_t getMaxHeight() const;

	void setName(string name);
	void setWidth(size_t width);
	void setLength(size_t length);
	void setMaxHeight(size_t maxHeight);

	size_t countVolume() const;
	size_t countSquare() const;

	static bool areTheyTheSame(const Water& first, const Water& second);
	static int isEqueal(const Water& first, const Water& second);
	static size_t findMaxSquareType(const Water first[], size_t size, size_t sizeCurrently);
private:
	string name;

	enum type { 
		LAKE, RIVER, OCEAN, 
		LAST 
	};
	string stringType[3]{ "Lake", "River", "Ocean" };
	type isType;
	size_t sizeCurrently;

	size_t width;
	size_t length;

	size_t maxHeight;
	size_t id;
	static size_t countOfWaters;

	void generateRandomEnum();
	void setTypeOfWater();
};
