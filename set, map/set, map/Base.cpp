#include "Base.h"

void Base::save(const string& fname)
{
	fstream file(fname, ios_base::binary | ios_base::trunc | ios_base::out);

	for (const auto& elem : map)
	{
		file.write((char*)&elem, sizeof(elem));
	}
	file.close();
}

void Base::load(const string& fname)
{
	ifstream in(fname, ios_base::binary);
	if (!in)
	{
		throw exception("Error opening file for read");
	}

	in.read(reinterpret_cast<char*>(&map), sizeof(multimap<string, string>));
	while (!in.eof())
	{
		print();
		in.read(reinterpret_cast<char*>(&map), sizeof(multimap<string, string>));
	}
	in.close();
}

inline multimap<string, vector<string>>::iterator Base::find1(const string& town)
{
	multimap<string, vector<string>>::iterator tmp = map.find(town);
	if (tmp == map.end())
	{
		throw exception("Town error.");
	}

	return tmp;
}

void Base::setTown(const string& country, const string& town, const string& new_town)
{
	if (town.empty())
	{
		throw exception("Old name.");
	}
	else if (new_town.empty())
	{
		throw exception("New name is empty.");
	}

	vector<string>& _town = getTowers(country);
	vector<string>::iterator tmp = (find(_town.begin(), _town.end(), _town));
	if (tmp == _town.end())
	{
		throw exception("There is no tower with this name");
	}

	(*tmp) = new_town;
}

void Base::add(const string& country, const string& town)
{
	vector<string> vec;
	vec.push_back(town);
	map.insert({ country, vec });
}

void Base::erase(const string& country, const string& town)
{
	vector<string>& vec = getTowers(country);
	vec.erase(find(vec.begin(), vec.end(), town));
}

size_t Base::countOfTowns()
{
	size_t counter = 0;
	for (const auto& multi : map)
	{
		if (!multi.second.empty())
		{
			++counter;
		}
	}

	return counter;
}

void Base::printCountries() const
{
	for (const auto& multi : map)
	{
		cout << "Country : " << multi.first << endl;
	}
}

void Base::print() const
{
	for (const auto& multi : map)
	{
		cout << "Country : " << multi.first << endl; 

		for (auto& v : multi.second)
		{
			cout << "\tTown : " << v << endl;
		}
	}
}
