#pragma once
#include <iostream>
#include <string>
using namespace std;

class User
{
public:
	User() = default;
	User(const string login, const string password);

	void setLogin(const string& login);
	void setPassword(const string& password);

	string getLogin() const;
	string getPassword() const;
private:
	string login = "Noname";
	string password = "NoPassword";
};

