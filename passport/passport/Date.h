#pragma once
#include <iostream>
using namespace std;

class Date
{
public:
	Date(const size_t& day = 0, const size_t& month = 0, const size_t& year = 0);
	Date addDay();

	size_t getYear() const;

	void setMonth(const size_t& month);
	void setYear(const size_t& year);
	void setDay(const size_t& day);

	void input();
	void print() const;
private:
	size_t day, month, year;

	static const size_t CURR_YEAR = 2021;
	bool isLeap(size_t year) 
	{
		return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	}
};