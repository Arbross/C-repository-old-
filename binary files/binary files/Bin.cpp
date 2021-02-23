#include "Bin.h"

Bin::Bin(const string& fname = "test.dat")
	: fname(fname) {}

void Bin::printAll() const
{
	Game game;
	ifstream in(fname, ios_base::binary);
	if (!in)
	{
		throw exception("Error opening file for read");
	}

	in.read(reinterpret_cast<char*>(&game), sizeof(Game));
	while (!in.eof())
	{
		game.print();
		in.read(reinterpret_cast<char*>(&game), sizeof(Game));
	}
	in.close();
}

void Bin::addGame(const char* name, const Game::Type type, const int popularity)
{
	vec.push_back(Game(name, type, popularity));

	fstream file(fname, ios_base::binary | ios_base::trunc | ios_base::out);

	for (const auto& elem : vec)
	{
		file.write((char*)&elem, sizeof(elem));
	}
	file.close();
}

Game& Bin::find(const char* name)
{
		ifstream in(fname, ios_base::binary);
		if (!in)
		{
			throw exception("Error opening file for read");
		}

		Game::Type type;
		size_t popularity;
		char str[Game::SIZE];

		in.read(reinterpret_cast<char*>(&popularity), sizeof(size_t));
		in.read(reinterpret_cast<char*>(&str), sizeof(char[Game::SIZE]));
		in.read(reinterpret_cast<char*>(&type), sizeof(Game::Type));
		while (!in.eof())
		{
			if (equal(str, name))
			{
				return *(new Game(str, type, popularity));
			}

			in.read(reinterpret_cast<char*>(&popularity), sizeof(size_t));
			in.read(reinterpret_cast<char*>(&str), sizeof(char[Game::SIZE]));
			in.read(reinterpret_cast<char*>(&type), sizeof(Game::Type));
		}

		throw exception("No game with this name\n");
}

Game& Bin::find(const Game::Type type)
{
	ifstream in(fname, ios_base::binary);
	if (!in)
	{
		throw exception("Error opening file for read");
	}

	Game::Type t_str;
	size_t popularity;
	char name[Game::SIZE];

	in.read(reinterpret_cast<char*>(&popularity), sizeof(size_t));
	in.read(reinterpret_cast<char*>(&name), sizeof(char[Game::SIZE]));
	in.read(reinterpret_cast<char*>(&t_str), sizeof(Game::Type));
	while (!in.eof())
	{
		if (equal(t_str, type))
		{
			return *(new Game(name, t_str, popularity));
		}

		in.read(reinterpret_cast<char*>(&popularity), sizeof(size_t));
		in.read(reinterpret_cast<char*>(&name), sizeof(char[Game::SIZE]));
		in.read(reinterpret_cast<char*>(&t_str), sizeof(Game::Type));
	}
	
	throw exception("No game with this type\n");
}

void Bin::erase(const char* name)
{
	Game game = find(name);
	vector<Game>::iterator it = find_if(vec.begin(), vec.end(), [&](Game game) { return game.getName() == name; });
	if (it != vec.end())
	{
		vec.erase(it);
	}

	fstream file(fname, ios_base::binary | ios_base::trunc | ios_base::out);
	for (const auto& elem : vec)
	{
		file.write((char*)&elem, sizeof(elem));
	}
	file.close();
}

bool Bin::equal(const Game::Type first, const Game::Type second)
{
	if (first == second)
	{
		return true;
	}

	return false;
}

bool Bin::equal(const char* first, const char* second)
{
	if (first == second)
	{
		return true;
	}

	return false;
}

void Bin::clear()
{
	vec.clear();
}

void Bin::edit(const size_t& number)
{
	cout << "1 - Name" << endl;
	cout << "2 - Type" << endl;
	cout << "3 - Population" << endl;
	int choose = 0;
	cin >> choose;

	switch (choose)
	{
	case 1: {
		char* name = nullptr;
		cout << "Enter name : "; cin >> name;
		vec[number].setName(name);
	} break;
	case 2: {
		Game::Type type;
		size_t num_of_enum = 0;
		cout << "Enter enum number : "; cin >> num_of_enum;
		if (num_of_enum == 0)
		{
			type = Game::Type::ACTION;
		}
		else if (num_of_enum == 1)
		{
			type = Game::Type::ADVENTURE;
		}
		else if (num_of_enum == 2)
		{
			type = Game::Type::SHOOTER;
		}

		vec[number].setType(type);
	} break;
	case 3: {
		int population;
		cout << "Enter name : "; cin >> population;
		vec[number].setPopulation(population);
	} break;
	default: throw exception("Bad switch value.");
		break;
	}
}
