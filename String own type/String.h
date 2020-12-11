#pragma once
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
	String& operator * (String& other);
	String& operator / (String& other);
	String& operator + (String& other);
	friend String& operator + (String& other, char* str);
	friend String& operator + (char* str, String& other);
	String& operator < (String& other);
	String& operator > (String& other);
	String& operator <= (String& other);
	String& operator >= (String& other);
	String& operator == (String& other);
	String& operator != (String& other);
	String& operator ! ();
	String& operator [] (String& other);
	String& operator () (String& other);
	String& operator *= (String& other);
	String& operator /= (String& other);
	String& operator += (String& other);
	friend String& operator += (String& other, char* str);
	friend String& operator += (char* str, String& other);
	ostream& operator >> (ostream& cin);
	istream& operator << (istream& cout);

	friend void Swap(String& objFirst, String& objSecond);

	const char* getStr() const
	{
		return str;
	}


private:
	char* str;
	size_t size;


};

