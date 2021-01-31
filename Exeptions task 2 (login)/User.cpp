#include "User.h"

User::User(const string login, const string password)
{
	setLogin(login);
	setPassword(password);
}

void User::setLogin(const string& login)
{
	this->login = login;
}

void User::setPassword(const string& password)
{
	this->password = password;
}

string User::getLogin() const
{
	return this->login;
}

string User::getPassword() const
{
	return this->password;
}
