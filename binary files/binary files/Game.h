#pragma once
#include <iostream>
#include <string>
using namespace std;

class Game
{
public:
	static const int SIZE = 80;
	enum class Type { ACTION, SHOOTER, ADVENTURE };
	Type type;
	Game(const char* name = "Noname", const Type type = Type::ACTION, const int popularity = 0);
	
	void print() const;
	string getName() const
	{
		string sname;
		sname.resize(size(name));

		for (size_t i = 0; i < SIZE; i++)
		{
			if ((const char*)name[i] == "")
			{
				break;
			}

			sname[i] = name[i];
		}

		return sname;
	}

	int getPopularity() const
	{
		return popularity;
	}

	void setName(const char* _name)
	{
		*name = *_name;
	}

	void setPopulation(const int& popularity)
	{
		this->popularity = popularity;
	}

	void setType(const Type& type)
	{
		this->type = type;
	}
private:
	char name[SIZE];
	int popularity;
};
