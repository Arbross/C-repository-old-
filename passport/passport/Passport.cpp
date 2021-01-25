#include "Passport.h"

Passport::Passport(const string& PIB, const string& seria, const size_t& number)
    : PIB(PIB), seria(seria), number(number)
{
    system("cls");

    cout << "Passport : " << endl;
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

string Passport::getPIB() const
{
    return PIB;
}

string Passport::getSeria() const
{
    return seria;
}

size_t Passport::getNumber() const
{
    return number;
}

void Passport::getBirth() const
{
    birth.print();
}

void Passport::getGive() const
{
    give.print();
}

void Passport::setPIB(const string& PIB)
{
    this->PIB = PIB;
}

void Passport::setSeria(const string& seria)
{
    this->seria = seria;
}

void Passport::setNumber(const size_t& number)
{
    this->number = number;
}

void Passport::setBirth()
{
    birth.input();
}

void Passport::setGive()
{
    give.input();
}

void Passport::enter()
{
    system("cls");

    cout << "Enter passport info" << endl;
    cout << "PIB : "; cin >> PIB;
    cout << "Seria : "; cin >> seria;
    cout << "Number : "; cin >> number;
    cout << "Birth : "; birth.input();
    cout << "Give : "; give.input();
}

void Passport::print() const
{
    system("cls");

    cout << "PIB : " << PIB << endl;
    cout << "Seria : " << seria << endl;
    cout << "Number : " << number << endl;
    cout << "Birth : "; birth.print();
    cout << "Give : "; give.print();
}
