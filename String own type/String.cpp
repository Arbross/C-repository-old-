#include "String.h"
#include <iostream>
#include <string>
using namespace std;

String::String()
	: String(80)
{
	
}

String::String(const size_t& size)
{
	setStringSize(size);
}

void String::setStringSize(const size_t& size)
{
	this->size = size;
	str = new char[size] {};
}

String String::concat(const String& other)
{
	size_t temp_size = this->size + other.size;

	return str[temp_size] = this->str[this->size] + other.str[other.size];
}

String String::isEqueal(const String& other)
{
	char* temp_str = nullptr;

	for (size_t i = 0; i < this->size; i++)
	{
		for (size_t j = 0; j < other.size; j++)
		{
			if (this->str[i] == other.str[j])
			{
				temp_str[i] += this->str[i];
			}
			else {
				continue;
			}
		}
	}

	return temp_str;
}

String::String(String&& other)
{
	this->str = other.str;
	this->size = other.size;

	other.str = nullptr;
	other.size = 0;
}

String& String::operator=(String&& other)
{
	if (this != &other)
	{
		if (this->str != nullptr)
		{
			delete[] str;
		}

		this->str = other.str;
		this->size = other.size;
		other.str = nullptr;
		other.size = 0;
	}

	return *this;
}

String& String::operator *(const String& other)
{
	String string;

	for (size_t i = 0; i < this->size; i++)
	{
		for (size_t j = 0; j < other.size; j++)
		{
			if (this->str[i] == other.str[j])
			{
				string.str[i] += this->str[i];
			}
			else {
				continue;
			}
		}
	}

	return string;
}

String& String::operator /(const String& other)
{
	String string;

	for (size_t i = 0; i < this->size; i++)
	{
		for (size_t j = 0; j < other.size; j++)
		{
			if (this->str[i] != other.str[j])
			{
				string.str[i] += this->str[i];
			}
			else {
				continue;
			}
		}
	}

	return string;
}

String& String::operator +(const String& other)
{
	String string;
	size_t temp_size = this->size + other.size;

	string.str[temp_size] = this->str[this->size] + other.str[other.size];

	return string;
}

String& String::operator *=(const String& other)
{
	String string;

	for (size_t i = 0; i < this->size; i++)
	{
		for (size_t j = 0; j < other.size; j++)
		{
			if (this->str[i] == other.str[j])
			{
				string.str[i] += this->str[i];
			}
			else {
				continue;
			}
		}
	}

	return string;
}

String& String::operator /=(const String& other)
{
	String string;

	for (size_t i = 0; i < this->size; i++)
	{
		for (size_t j = 0; j < other.size; j++)
		{
			if (this->str[i] != other.str[j])
			{
				string.str[i] += this->str[i];
			}
			else {
				continue;
			}
		}
	}

	return string;
}

String& String::operator +=(const String& other)
{
	String string;
	size_t temp_size = this->size + other.size;

	string.str[temp_size] = this->str[this->size] + other.str[other.size];

	return string;
}

String& operator +=(const String& other, char* str)
{
	String string;
	size_t temp_size = other.size + strlen(str);

	str[temp_size] += other.str[other.size];
	str[temp_size] += str[strlen(str)];

	string.str[temp_size] = str[temp_size];

	return string;
}

String& operator +=(char* str, const String& other)
{
	String string;
	size_t temp_size = other.size + strlen(str);

	str[temp_size] += str[strlen(str)];
	str[temp_size] += other.str[other.size];

	string.str[temp_size] = str[temp_size];

	return string;
}

std::ostream& operator <<(std::ostream& out, const String& s)
{
	out << s.getStr();

	return out;
}

/*std::istream& operator >>(std::istream& in, String& s)
{
	char* str = s.getStr();

	in >> s.setStr(str);
	
	return in;
}*/

bool String::operator <(const String& other)
{
	return this->size < other.size;
}

bool String::operator >(const String& other)
{
	return this->size > other.size;
}

bool String::operator <=(const String& other)
{
	return this->size <= other.size;
}

bool String::operator >=(const String& other)
{
	return this->size >= other.size;
}

bool String::operator==(const String& other)
{
	return this->size == other.size;
}

bool String::operator !=(const String& other)
{
	return this->size != other.size;
}

String& String::operator!()
{
	String string;
	int j = 0;

	for (int i = this->size; i > 0; i--)
	{
		string.str[j] += str[i];
		j++;
	}

	return string;
}

String String::operator[](int index)
{
	String string;
	return string.str[index];
}

String& String::operator()(size_t point)
{
	String string;

	if (point > this->size || point < this->size)
	{
		return string = "";
	}
	else {
		for (size_t i = point; i < this->size; i++)
		{
			string.str[i] = this->str[i];
		}
	}

	return string;
}

String& String::operator()(size_t firstPoint, size_t twoPoint)
{
	String string;

	if (firstPoint > twoPoint || twoPoint > this->size || firstPoint > this->size)
	{
		return string = "";
	}
	else {
		for (size_t i = firstPoint; i < twoPoint; i++)
		{
			string.str[i] = this->str[i];
		}
	}

	return string;
}

String& String::operator++()
{
	String string;
	string.str++;

	for (size_t i = 1; i < this->size; i++)
	{
		string.str[i] = this->str[i];
	}

	return string;
}

String String::operator++(int)
{
	String tmp = *this;
	++* this;
	return tmp;
}

String& operator+(const String& other, char* str)
{
	String string;

	size_t temp_size = other.size + strlen(str);

	str[temp_size] += other.str[other.size];
	str[temp_size] += str[strlen(str)];

	string.str[temp_size] = str[temp_size];

	return string;
}

String& operator+(char* str, const String& other)
{
	String string;

	size_t temp_size = other.size + strlen(str);

	str[temp_size] += str[strlen(str)];
	str[temp_size] += other.str[other.size];

	string.str[temp_size] = str[temp_size];

	return string;
}

void Swap(String& objFirst, String& objSecond)
{
	String tmp = move(objFirst);
	objFirst = move(objSecond);
	objSecond = move(tmp);
}


String::String(const char* str)
{
	if (str == nullptr)
	{
		setStringSize(80);
		return;
	}

	setStringSize(strlen(str) + 1);
	strcpy_s(this->str, size, str);
}

String::String(String& other)
{
	setStringSize(strlen(other.str) + 1);
	strcpy_s(str, size, other.str);
}

