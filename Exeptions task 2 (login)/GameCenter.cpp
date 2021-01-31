#include "GameCenter.h"

const void GameCenter::regUser(const string& login, const string& password)
{
	for (auto& user : vUsers)
	{
		if (login == user.getLogin())
		{
			throw InvalidLoginException("Login uncorect. User already exist.");
		}
	}

	if (password.size() < 8)
	{
		throw InvalidPasswordException("Password uncorect. User password is too low.");
	}

	{
		bool isUpper = false;
		for (size_t j = 0; j < password.length(); j++)
		{
			if (isupper(password[j]))
			{
				isUpper = true;
				break;
			}
		}

		if (isUpper == false)
		{
			throw InvalidPasswordException("Password uncorect. User password doesn't have any up letter.");
		}
	}
	
	{
		bool isLower = false;
		for (size_t j = 0; j < password.length(); j++)
		{
			if (islower(password[j]))
			{
				isLower = true;
				break;
			}
		}

		if (isLower == false)
		{
			throw InvalidPasswordException("Password uncorect. User password doesn't have any low letter.");
		}
	}

	{
		bool isDigit = false;
		for (size_t j = 0; j < password.length(); j++)
		{
			if (isdigit(password[j]))
			{
				isDigit = true;
				break;
			}
		}

		if (isDigit == false)
		{
			throw InvalidPasswordException("Password uncorect. User password doesn't have any number.");
		}
	}
	
	{
		bool isSymbol = false;
		for (size_t j = 0; j < password.length(); j++)
		{
			if (password[j] >= char(33) && password[j] <= 47 || password[j] >= char(58) && password[j] <= char(64) || password[j] >= char(91) && password[j] <= char(96) || password[j] >= 123 && password[j] <= char(126))
			{
				isSymbol = true;
				break;
			}
		}

		if (isSymbol == false)
		{
			throw InvalidPasswordException("Password uncorect. User password doesn't have any symbol.");
		}
	}

	vUsers.push_back(User(login, password));
	cout << "You are register with login " << login << " and password " << password << ".\n";
}

const bool GameCenter::logUser(const string& login, const string& password)
{
	for (auto& user : vUsers)
	{
		if (login == user.getLogin())
		{
			if (password == user.getPassword())
			{
				cout << "User logined sucssesfully." << endl;
				return true;
			}
			else {
				throw InvalidPasswordException("Login uncorect. User password isn't found.");
			}
		}
	}

	throw InvalidLoginException("Login uncorect. User login isn't found.");
}
