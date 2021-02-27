#include "Date.h"

Date::Date(const size_t& day, const size_t& month, const size_t& year)
{
	setYear(year);
	setMonth(month);
	setDay(day);
}

Date Date::addDay()
{
	size_t dayInMonth[]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	bool check = false;

	if (month == 2 && day == 28 && isLeap(year))
	{
		++day;
		check = true;
	}
	else if (day == dayInMonth[11])
	{
		day = 1;
		month = 1;
		++year;
	}
	else if (day == dayInMonth[month - 1] && check == false || month == 2 && day == 29 && isLeap(year))
	{
		day = 1;
		++month;
	}
	else if (day < dayInMonth[month - 1])
	{
		++day;
	}

	return *this;
}

size_t Date::getYear() const
{
	return year;
}

size_t Date::getMonth() const
{
	return month;
}

size_t Date::getDay() const
{
	return day;
}

void Date::setMonth(const size_t& month)
{
	if (month >= 1 && month <= 12)
	{
		this->month = month;
	}
}

void Date::setYear(const size_t& year)
{
	if (year <= CURR_YEAR)
	{
		this->year = year;
	}
}

void Date::setDay(const size_t& day)
{
	size_t dayInMonth[]{ 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (day >= 1) // && day <= dayInMonth[month - 1])
	{
		this->day = day;
	}
	else if (month == 2 && day == 29 && isLeap(year))
	{
		this->day = day;
	}
}

void Date::input()
{
	while (true)
	{
		cout << "Enter day : "; cin >> day;
		cout << "Enter month : "; cin >> month;
		cout << "Enter year : "; cin >> year;

		if (day > 0 && day <= 31 && month > 0 && month <= 12)
		{
			cout << "Enter date successfull!\n"; break;
		}
		else if (month == 2 && day == 29 && isLeap(year))
		{
			cout << "Enter date successfull!\n"; break;
		}
	}
}

void Date::print() const
{
	cout << day << "/" << month << "/" << year << endl;
}
