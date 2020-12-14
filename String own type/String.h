#pragma once
#include <iostream>

class String
{
public:
	String();
	String(const size_t& size);
	String(const char* str);
	String(String& other);

	void setStringSize(const size_t& size);

	String concat(const String& other);
	String isEqueal(const String& other);
	
	String(String&& other);
	String& operator = (String&& other);

	String& operator * (const String& other);
	String& operator / (const String& other);
	String& operator + (const String& other);
	friend String& operator + (const String& other, char* str);
	friend String& operator + (char* str, const String& other);
	bool operator < (const String& other);
	bool operator > (const String& other);
	bool operator <= (const String& other);
	bool operator >= (const String& other);
	bool operator == (const String& other);
	bool operator != (const String& other);
	String& operator ! ();
	String operator [] (int idex);
	String& operator () (size_t point);
	String& operator () (size_t firstPoint, size_t twoPoint);
	String& operator ++ ();
	String operator ++ (int);
	String& operator *= (const String& other);
	String& operator /= (const String& other);
	String& operator += (const String& other);
	friend String& operator += (const String& other, char* str);
	friend String& operator += (char* str, const String& other);
	friend std::ostream& operator <<(std::ostream& out, const String& s);
	friend std::istream& operator >>(std::istream& in, String& s);

	friend void Swap(String& objFirst, String& objSecond);

	char* getStr() const
	{
		return str;
	}
	void setStr(char* str)
	{
		this->str = str;
	}


private:
	char* str;
	size_t size;


};

