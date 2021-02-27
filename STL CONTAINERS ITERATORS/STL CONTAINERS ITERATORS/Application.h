#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Application
{
public:
	Application(const string& finalPoint = "NoFinalPoint", const size_t& number = 0, const string& PIB = "NoPIB", const size_t& day = 0, const size_t& month = 0, const size_t& year = 0);

	void setFinalPoint(const string& finalPoint);
	void setNumber(const size_t& number);
	void setPIB(const string& PIB);
	void setDate(const size_t& day = 0, const size_t& month = 0, const size_t& year = 0);

	size_t getDay() const;
	size_t getMonth() const;
	size_t getYear() const;

	size_t getNumber() const;

	static bool compare(const Application& first, const Application& second)
	{
		return first.number < second.number && first.finalPoint < second.finalPoint;
	}

	void print() const;
private:
	string finalPoint;
	size_t number;
	string PIB;
	Date date;
};

inline Application::Application(const string& finalPoint, const size_t& number, const string& PIB, const size_t& day, const size_t& month, const size_t& year)
	: finalPoint(finalPoint), number(number), PIB(PIB)
{
	date.setDay(day);
	date.setMonth(month);
	date.setYear(year);
}

inline void Application::setFinalPoint(const string& finalPoint)
{
	this->finalPoint = finalPoint;
}

inline void Application::setNumber(const size_t& number)
{
	this->number = number;
}

inline void Application::setPIB(const string& PIB)
{
	this->PIB = PIB;
}

inline void Application::setDate(const size_t& day, const size_t& month, const size_t& year)
{
	date.setDay(day);
	date.setMonth(month);
	date.setYear(year);
}

inline size_t Application::getDay() const
{
	return date.getDay();
}

inline size_t Application::getMonth() const
{
	return date.getMonth();
}

inline size_t Application::getYear() const
{
	return date.getYear();
}

inline size_t Application::getNumber() const
{
	return number;
}

inline void Application::print() const
{
	cout << "Final point : " << finalPoint << endl;
	cout << "Number : " << number << endl;
	cout << "PIB : " << PIB << endl;
	cout << "Date : "; date.print(); cout << endl;
}

