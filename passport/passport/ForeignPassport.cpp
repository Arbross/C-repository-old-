#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(const string& PIB, const string& seria, const size_t& number)
	: Passport(PIB, seria, number)
{
    system("cls");

    cout << "Foreign passport : " << endl;
    birth.input();

    cout << "Foreign passport : " << endl;
    give.input();

    if (give.getYear() <= birth.getYear() + 18)
    {
        system("cls");
        cout << "Error of give the passport. Error date." << endl;
        exit(0);
    }
}

void ForeignPassport::addVisa(const string& nameOfACountry, const size_t& birthYear)
{
    visas.push_back(Visa(nameOfACountry, birthYear));
}

void ForeignPassport::enter()
{
    system("cls");
    string nameOfACountry;
    size_t birthYear;

    cout << "Enter passport info" << endl;
    cout << "PIB : "; cin >> PIB;
    cout << "Seria : "; cin >> seria;
    cout << "Number : "; cin >> number;
    cout << "Birth : "; birth.input();
    cout << "Give : "; give.input();
    cout << "Name of a country : "; getline(cin, nameOfACountry);
    cout << "Birth year : "; cin >> birthYear;

    visas.push_back(Visa(nameOfACountry, birthYear));
}

void ForeignPassport::print() const
{
    cout << "PIB : " << PIB << endl;
    cout << "Seria : " << seria << endl;
    cout << "Number : " << number << endl;
    cout << "Birth : "; birth.print();
    cout << "Give : "; give.print();

    cout << "Visas : ";
    for (const auto& elem : visas)
    {
        elem.print();
    }
}
