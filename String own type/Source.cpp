#include <iostream>
#include "String.h"
using namespace std;

int main()
{
	String str("Test line");
	String str2("ghfghfghfg");

	cout << str.getStr() << endl;
	cout << str2.getStr() << endl;

	Swap(str, str2);

	cout << str.getStr() << endl;
	cout << str2.getStr() << endl;



}