#pragma once
#include <iostream>
#include <string>
using namespace std;

class MyException : public exception
{
public:
	MyException(const string& message = "Unknown error!")
		: message(message) {}

	string isWhat() const
	{
		return message;
	}
private:
	string message;
};

class InvalidLoginException : public MyException
{
public:
	InvalidLoginException(const string& message = "Invalid login.")
		: MyException(message) {}
private:
};

class InvalidPasswordException : public MyException
{
public:
	InvalidPasswordException(const string& message = "Invalid password.")
		: MyException(message) {}
private:
};

class InvalidSameException : public MyException
{
public:
	InvalidSameException(const string& message = "Login or password already exist.")
		: MyException(message) {}
private:
};
