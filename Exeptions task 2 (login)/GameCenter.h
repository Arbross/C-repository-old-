#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "User.h"
#include "Exeptions.h"
using namespace std;

class GameCenter
{
public:
	const void regUser(const string& login, const string& password);
	const bool logUser(const string& login, const string& password);

private:
	vector<User> vUsers;
};

