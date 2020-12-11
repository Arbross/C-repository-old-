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
	String& operator [] (int idex);
	String& operator () (String& other);
	String& operator *= (String& other);
	String& operator /= (String& other);
	String& operator += (String& other);
	friend String& operator += (String& other, char* str);
	friend String& operator += (char* str, String& other);
	friend ostream& operator <<(ostream& out, const String& s);
	friend istream& operator >>(istream& in, String& s);

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

