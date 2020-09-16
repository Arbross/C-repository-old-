#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <time.h>
#include <cmath>
using namespace std;

void Foo(float sa, float sb, float sc)
{
	float x = 0;
	float& sx = x;

	float y = 0;
	float& sy = y;

	cout << "Enter a: ";
	cin >> sa;

	cout << "Enter b: ";
	cin >> sb;

	cout << "Enter c: ";
	cin >> sc;

	cout << endl;

	cout << "----------------------" << endl;
	cout << "a = " << sa << ", b = " << sb << ", c = " << sc << endl;
	cout << "----------------------" << endl;

	cout << endl;

	if (sb < 0)
	{
		cout << sa << "x^2 - " << sb << "x + " << sc << " = 0" << endl;
	}
	else if (sb > 0)
	{
		cout << sa << "x^2 + " << sb << "x + " << sc << " = 0" << endl;
	}

	double D = (sb * sb) - (4 * sa * sc);

	D = sqrt(D);

	sx = ((sb - (sb * 2)) - D) / (2 * sa);
	sy = ((sb - (sb * 2)) + D) / (2 * sa);

	cout << "x1 = " << sx << endl;
	cout << "x2 = " << sy << endl;
}

int main()
{
	setlocale(LC_ALL, " ");
	srand(time(NULL));

	float a = 0, b = 0, c = 0;

	float& sa = a;
	float& sb = b;
	float& sc = c;

	Foo(sa, sb, sc);























































	system("pause");
	return 0;
}