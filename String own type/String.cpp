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
	char* temp_str = new char[this->size];

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

String& String::operator*(String& other)
{
	char* temp_str = new char[this->size];

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

	// this->str = *temp_str;
}

String& String::operator /(String& other)
{
	char* temp_str = new char[this->size];

	for (size_t i = 0; i < this->size; i++)
	{
		for (size_t j = 0; j < other.size; j++)
		{
			if (this->str[i] != other.str[j])
			{
				temp_str[i] += this->str[i];
			}
			else {
				continue;
			}
		}
	}
}

String& String::operator +(String& other)
{
	size_t temp_size = this->size + other.size;

	this->str[temp_size] = this->str[this->size] + other.str[other.size];
}




String& String::operator()(String& other)
{
	
}

String& String::operator *=(String& other)
{
	char* temp_str = new char[this->size];

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

	// this->str = *temp_str;
}

String& String::operator /=(String& other)
{
	char* temp_str = new char[this->size];

	for (size_t i = 0; i < this->size; i++)
	{
		for (size_t j = 0; j < other.size; j++)
		{
			if (this->str[i] != other.str[j])
			{
				temp_str[i] += this->str[i];
			}
			else {
				continue;
			}
		}
	}
}

String& String::operator +=(String& other)
{
	size_t temp_size = this->size + other.size;

	this->str[temp_size] = this->str[this->size] + other.str[other.size];
}

String& operator +=(String& other, char* str)
{
	size_t temp_size = other.size + strlen(str);

	str[temp_size] += other.str[other.size];
	str[temp_size] += str[strlen(str)];
}

String& operator +=(char* str, String& other)
{
	size_t temp_size = other.size + strlen(str);

	str[temp_size] += str[strlen(str)];
	str[temp_size] += other.str[other.size];
}

ostream& operator <<(ostream& out, const String& s)
{
	out << s.getStr();

	return out;
}

/*istream& operator >>(istream& in, String& s)
{
	in >> s.setStr(s.getStr());
	
	return in;
}*/

String& String::operator <(String& other)
{
	if (this->size < other.size)
	{
		cout << "First in lower than two." << endl;
	}
}

String& String::operator >(String& other)
{
	if (this->size > other.size)
	{
		cout << "First in bigger than two." << endl;
	}
}

String& String::operator <=(String& other)
{
	if (this->size <= other.size)
	{
		cout << "First in lower than two (<=)." << endl;
	}
}

String& String::operator >=(String& other)
{
	if (this->size >= other.size)
	{
		cout << "First in bigger than two (>=)." << endl;
	}
}

String& String::operator==(String& other)
{
	if (this->size == other.size)
	{
		cout << "Isn't equeal." << endl;
	}
}

String& String::operator!=(String& other)
{
	// TODO: вставьте здесь оператор return
}

String& String::operator!()
{
	char* str;
	int j = 0;

	for (int i = this->size; i > 0; i--)
	{
		this->str[i] += str[j];
		j++;
	}
}

String& String::operator[](int idex)
{
	return this->str[idex];
}

String& operator+(String& other, char* str)
{
	size_t temp_size = other.size + strlen(str);

	str[temp_size] += other.str[other.size];
	str[temp_size] += str[strlen(str)];
}

String& operator+(char* str, String& other)
{
	size_t temp_size = other.size + strlen(str);

	str[temp_size] += str[strlen(str)];
	str[temp_size] += other.str[other.size];
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

