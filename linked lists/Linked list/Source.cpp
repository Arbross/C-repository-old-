#include <iostream>
#include "List.h"
using namespace std;

int main()
{
	MyForwardList<int> fl;
	MyForwardList<int> new_fl;

	fl.pushFront(11);
	fl.pushFront(5);
	fl.pushFront(11);
	fl.pushFront(6);

	new_fl.pushFront(10);
	new_fl.pushFront(5);
	new_fl.pushFront(11);
	new_fl.pushFront(6);
	/*fl.addTail(15);
	fl.addTail(20);
	fl.print();

	fl.eraseFront();
	fl.eraseFront();
	fl.insertAfter(1, 333);
	fl.insertAfter(5, 1333);*/

	//fl.eraseAfter(10);
	//fl.print();
	//fl.deleteFromTail();
	//fl.print();

	/*if (fl == new_fl)
	{
		cout << "Equeal.\n";
	}*/

	//fl = new_fl;

	fl.print();
	fl.changeAndFind(12, 11);
	fl.deleteWithValue(12);
	fl.print();

	return 0;
}