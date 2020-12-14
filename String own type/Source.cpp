#include <iostream>
#include "String.h"
using namespace std;

int main()
{
	String str("o");
	String str2("ghfghfghfg");
	String str3;

	int lol = str != str2;
	cout << lol << endl;

	String ste = str * str3;
	cout << ste.getStr() << endl;

	/*str3 = str.isEqueal(str2);
	cout << str3 << endl;*/

}