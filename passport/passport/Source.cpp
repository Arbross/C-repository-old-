#include <iostream>
#include "Passport.h"
#include "ForeignPassport.h"
using namespace std;

int main()
{
	// ��� ������ ����� � ����� (������ �������), ��� ����� ���� ������ �i� ����� ��� �i���� (�i� �����i �� ������� ��i������� � ����� ����������)

	/*Passport passport("PIB", "Lol. I dont know what is it", 0);
	passport.print();*/

	ForeignPassport foreignPassport("PIB", "Lol. I dont know what is it", 1);
	/*foreignPassport.addVisa("LoliLand", 2000);*/
	foreignPassport.print();

	return 0;
}