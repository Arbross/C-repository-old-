#include "Visa.h"

Visa::Visa(const string& nameOfACountry, const size_t& birthYear)
	: nameOfACountry(nameOfACountry)
{
    system("cls");

    cout << "Visa : " << endl;
    give.input();

    if (give.getYear() <= birthYear + 18)
    {
        system("cls");
        cout << "Error of give the passport. Error date." << endl;
        exit(0);
    }
}

void Visa::setNameOfACountry(const string& nameOfACountry)
{
    this->nameOfACountry = nameOfACountry;
}

string Visa::getNameOfACountry() const
{
    return nameOfACountry;
}

void Visa::print() const
{
    cout << "Name of a country : " << getNameOfACountry() << endl;
    cout << "Give date : "; give.print();
}
