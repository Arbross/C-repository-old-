#include <iostream>
#include "Exeptions.h"
#include "GameCenter.h"
using namespace std;

int main()
{
	try {
		GameCenter gameCenter;

		gameCenter.regUser("qwe", "123qweQEW.");
		gameCenter.logUser("qwe", "123qweQEW.");
	}
	catch (const InvalidLoginException& log)
	{
		cout << "Login exeption : " << log.isWhat() << endl;
	}
	catch (const InvalidPasswordException& reg)
	{
		cout << "Password exeption : " << reg.isWhat() << endl;
	}
	catch (const MyException& ex)
	{
		cout << "Caught myexcpetion.\n";
	}
	catch (const exception& ex)
	{
		cout << "Unbelivable excpetion (&).\n";
	}
	catch (...)
	{
		cout << "Unbelivable excpetion (...).\n";
	}

	return 0;
}
