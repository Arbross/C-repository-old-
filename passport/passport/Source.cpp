#include <iostream>
#include "Passport.h"
#include "ForeignPassport.h"
using namespace std;

int main()
{
	// Тут трошки криво з датою (багато вводити), щоб легше було ставте рiк кожен раз бiльше (рiк видачi не повинен спiвпадати з роком народження)

	/*Passport passport("PIB", "Lol. I dont know what is it", 0);
	passport.print();*/

	ForeignPassport foreignPassport("PIB", "Lol. I dont know what is it", 1);
	/*foreignPassport.addVisa("LoliLand", 2000);*/
	foreignPassport.print();

	return 0;
}