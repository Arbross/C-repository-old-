#include "Menu.h"

Menu::Menu()
{
	while (true)
	{
		cout << "1 - Add" << endl;
		cout << "2 - Add" << endl;
		cout << "3 - Erase" << endl;
		cout << "4 - Print" << endl;
		cout << "5 - Print All" << endl;
		cout << "6 - Count of all applications" << endl;
		cout << "7 - Sort" << endl;
		cout << "8 - Save" << endl;
		cout << "9 - Load" << endl;
		cout << "10 - system('cls')" << endl;
		cout << "11 - Exit" << endl;
		size_t number = 0;
		cin >> number;

		switch (number)
		{
		case 1: {
			string finalPoint = "NoFinalPoint", PIB = "NoPIB";
			size_t day = 0, month = 0, year = 0, number = 0;
			cout << "Day : " << endl; cin >> day;
			cout << "Month : " << endl; cin >> month;
			cout << "Year : " << endl; cin >> year;
			cout << "Number : " << endl; cin >> number;
			cout << "finalPoint : " << endl; cin >> finalPoint;
			cout << "PIB : " << endl; cin >> PIB;

			add(finalPoint, number, PIB, day, month, year);
		} break;
		case 2: {
			// void add(const size_t & pos = 0, const string & finalPoint = "NoFinalPoint", const size_t & number = 0, const string & PIB = "NOPIB", const size_t & day = 0, const size_t & month = 0, const size_t & year = 0);
			string finalPoint = "NoFinalPoint", PIB = "NoPIB";
			size_t day = 0, month = 0, year = 0, number = 0, pos = 0;
			cout << "Pos : " << endl; cin >> pos;
			cout << "Day : " << endl; cin >> day;
			cout << "Month : " << endl; cin >> month;
			cout << "Year : " << endl; cin >> year;
			cout << "Number : " << endl; cin >> number;
			cout << "finalPoint : " << endl; cin >> finalPoint;
			cout << "PIB : " << endl; cin >> PIB;

			add(pos, finalPoint, number, PIB, day, month, year);
		} break;
		case 3: {
			size_t value;
			cout << "Value : "; cin >> value;
			erase(value);
		} break;
		case 4: {
			size_t day = 0, month = 0, year = 0, number = 0;
			cout << "Day : " << endl; cin >> day;
			cout << "Month : " << endl; cin >> month;
			cout << "Year : " << endl; cin >> year;
			cout << "Number : " << endl; cin >> number;

			print(day, month, year, number);
		} break;
		case 5: {
			printAll();
		} break;
		case 6: {
			cout << "Count of all applications : " << countOfAllApplications() << endl;
		} break;
		case 7: {
			sort();
			cout << "Succsessfuly sorted." << endl;
		} break;
		case 8: {
			string path;
			cout << "Path : "; cin >> path;
			save(path);
		} break;
		case 9: {
			string path;
			cout << "Path : "; cin >> path;
			load(path);
		} break;
		case 10: {
			system("cls");
		} break;
		case 11: {
			exit(0);
		} break;
		default: {
			cerr << "Error" << endl;
		} break;
		}
	}
}

void Menu::add(const string& finalPoint, const size_t& number, const string& PIB, const size_t& day, const size_t& month, const size_t& year)
{
	application.push_back(Application(finalPoint, number, PIB, day, month, year));
}

void Menu::add(const size_t& pos, const string& finalPoint, const size_t& number, const string& PIB, const size_t& day, const size_t& month, const size_t& year)
{
	list<Application>::iterator it;
	it = application.begin();

	for (size_t i = 0; i < pos; i++) { ++it; }
	application.insert(it, Application(finalPoint, number, PIB, day, month, year));
}

void Menu::erase(const size_t& value)
{
	int i = 0;
	for (auto it = application.begin(); it != application.end(); ) {
		if (i == value) 
		{
			it = application.erase(it);
			break;
		}
		else {
			++i;
			++it;
		}
	}
}

void Menu::printAll() const
{
	int counter = 0;
	for (const auto& elem : application)
	{
		cout << "Counter : " << counter << endl;

		elem.print();
		cout << endl;
	}
}

void Menu::print(const size_t& day, const size_t& month, const size_t& year, const size_t& number) const
{
	for (const auto& elem : application)
	{
		if (elem.getDay() == day && elem.getMonth() == month && elem.getYear() == year && elem.getNumber() == number)
		{
			elem.print();
		}
	}
}

size_t Menu::countOfAllApplications() const
{
	size_t i = 0;
	for (const auto& elem : application)
	{
		++i;
	}
	
	return i;
}

void Menu::sort()
{
	application.sort(Application::compare);
}

void Menu::save(const string& fname)
{
	fstream file(fname, ios_base::binary | ios_base::trunc | ios_base::out);

	for (const auto& elem : application)
	{
		file.write((char*)&elem, sizeof(elem));
	}
	file.close();
}

void Menu::load(const string& fname)
{
	Application applications;
	ifstream in(fname, ios_base::binary);
	if (!in)
	{
		throw exception("Error opening file for read");
	}

	in.read(reinterpret_cast<char*>(&applications), sizeof(applications));
	while (!in.eof())
	{
		applications.print();
		in.read(reinterpret_cast<char*>(&applications), sizeof(Application));
	}
	in.close();
}
