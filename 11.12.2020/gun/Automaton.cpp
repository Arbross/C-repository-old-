#include "Automaton.h"

void Automaton::takeStore()
{
	stores.topPlusPlus();
}

void Automaton::shoot()
{
	if (stores.load() == true)
	{
		cout << "������� ��������� ���� " << stores.getUniqueID() << ", �� ������." << endl;
	}
	else {
		cout << "������� ��������� ���� " << stores.getUniqueID() << ", �� �����������." << endl;
	}
}
