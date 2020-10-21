#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <time.h>
#include <string>
#include <Windows.h>
#include <conio.h>
using namespace std;

    /*Створити масив структури студентів. У кожного імя, прізвище, дата народження(структура), масив з 10 оцінок. Є структура клас.
      У класа є керівник(структура) і масив студентів, назва. У деяких дітей є пільги. У школі є діти з однієї сімї. +

    - Вивести усіх відмінників. +

    - Вивести  керівника, в класі якого найкраща успішність. +

    - Вивести назву класа з найгіршою успішністю. +

    - Вивести всіх братів і сестер. +

    - Вивести дітей, які народились в один день. +

    - Вивести найстаршого учня. +

    - Скільки учнів мають середній бал більше 8.5? +

    - В якому класі найбільше пільговиків? +
    
    */

// This is create birth date (day, month, year)
struct Date
{
    int day;
    int month;
    int year;

    void PrintBirth()
    {
        if (month >= 10 || day >= 10)
        {
            cout << "Birth: " << day << "." << month << "." << year << endl;
        }
        else if (month <= 10 || day <= 10)
        {
            cout << "Birth: " << "0" << day << "." << "0" << month << "." << year << endl;
        }

    }
};

// Teacher generation of all and "Print" function
struct Teacher
{
    string FirstName;
    string LastName;
    Date data;

    int age = 0;

    void Fill(Teacher* teacher)
    {
        int name = 0, surname = 0;

        string str_name[] = { "Jennifer", "Jack", "Josephina", "Larry", "Luke" };
        string str_surname[] = { "Stark", "Mait", "Router", "Yonko", "Teto" };

        // Teacher and age
        name = rand() % 5;
        surname = rand() % 5;
        teacher->age = rand() % 35 + 25;

        // Names
        teacher->FirstName = str_name[name];
        teacher->LastName = str_surname[surname];

        // Birth
        teacher->data.day = rand() % 30 + 10;
        teacher->data.month = rand() % 12 + 1;
        teacher->data.year = 2020 - teacher->age;
    }

    void Print()
    {
        cout << "+++++++++++++Teacher+++++++++++++" << endl;
        cout << "First name: " << FirstName << endl;
        cout << "Last name: " << LastName << endl;
        cout << "Age: " << age << endl;
        data.PrintBirth();
        cout << "+++++++++++++++++++++++++++++++++" << endl;

        cout << endl;
    }
};

// Struct of class and "Print" classmates
struct Student
{
public:
    string FirstName;
    string LastName;
    Date data;

    int* marks = new int[10];
    int age = 0;
    int beneficiary = 0;

    void Fill(Student* mate)
    {
        int name = 0, surname = 0;

        string str_name[] = { "Carl", "Mark", "Maks", "Jimmy", "Kate" };
        string str_surname[] = { "Polin", "Trolin", "Falin", "Krol", "Shame" };

        // Student and age
        name = rand() % 5;
        surname = rand() % 5;
        mate->age = rand() % 4 + 18;

        // Names
        mate->FirstName = str_name[name];
        mate->LastName = str_surname[surname];

        // Birth
        mate->data.day = rand() % 30 + 1;
        mate->data.month = rand() % 12 + 1;
        mate->data.year = 2020 - mate->age;

        // Good guy or not ?
        Exellent_Guy(mate);

        // Beneficiary classmate
        int range = rand() % 9;

        if (range == 3)
        {
            mate->beneficiary = 1;
        }
        else
        {
            mate->beneficiary = 0;
        }
    }

    // Exellent guy create
    void Exellent_Guy(Student* mate)
    {
        int exellent_guys = 0;

        for (int i = 0; i < 10; i++)
        {
            exellent_guys = rand() % 5;

            if (exellent_guys >= 1)
            {
                for (int j = 0; j < 10; j++)
                {
                    mate->marks[j] = rand() % 10 + 2;
                }
                break;
            }
            else if (exellent_guys == 0)
            {
                for (int j = 0; j < 10; j++)
                {
                    mate->marks[j] = rand() % 2 + 10;
                }
                break;
            }
        }
    }

    // Print teacher
    void Print(Teacher* teachers)
    {
        cout << "-------------Student-------------" << endl;
        cout << "First name: " << FirstName << endl;
        cout << "Last name: " << LastName << endl;
        cout << "Age: " << age << endl;
        data.PrintBirth();

        cout << "Marks: ";
        for (int i = 0; i < 10; i++)
        {
            cout << marks[i] << ", ";
        }
        cout << endl;
        if (beneficiary == 1)
        {
            cout << "Beneficiary: +" << endl;
        }
        else if (beneficiary == 0)
        {
            cout << "Beneficiary: -" << endl;
        }
        else {
            cout << "Error" << endl;
        }
        cout << "Teacher: " << teachers->FirstName << " ";
        cout << teachers->LastName << endl;
        cout << "---------------------------------" << endl;

        cout << endl;
    }
};

// Menu
void SetColor(int col)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}

void Size_Console(int x, int y)
{
    HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD crd = { x, y };
    SMALL_RECT src = { 0, 0, crd.X , crd.Y };
    SetConsoleWindowInfo(out_handle, true, &src);
    SetConsoleScreenBufferSize(out_handle, crd);
}

void SetPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int isMenu(string menu_items[], int size) 
{
    int key = 0, code = 0;

    do {
        key = (key + size) % size;
        for (int i = 0; i < size; i++)
        {
            SetPos(0, 191 + i);
            if (key == i)
            {
                cout << " "; SetColor(6); cout << menu_items[i]; SetColor(3); cout << " " << endl; SetColor(15);
            }
            else
            {
                cout << " "; cout << menu_items[i]; cout << " " << endl;
            }
        }
        code = _getch();
        if (code == 224)
        {
            code = _getch();
            if (code == 80)
            {
                key++;
            }
            if (code == 72)
            {
                key--;
            }
        }
    } while (code != 13);
    return key;
}

// Managemant of group, teachers and students
struct Groups
{
    Student student[5];
    Teacher teacher[3];
    string groupname;

    int beneficiarys_count[3] = {0, 0, 0};
};

// "Fill" teacher and students settings
void Fill(Groups* groups) 
{
    for (int i = 0; i < 3; i++)
    {
        cout << "-------------Group " << i << "-------------" << endl;
        groups[i].teacher[i].Fill(&groups[i].teacher[i]);
        groups[i].teacher[i].Print();
        cout << endl;

        for (int j = 0; j < 5; j++)
        {
            groups[i].student[j].Fill(&groups[i].student[j]);
            groups[i].student[j].Print(&groups[i].teacher[i]);
            cout << endl;
        }
    }
}

// Main functions "Menu"
void Menu()
{
    // Count of classmates and there structs
    int count_of_classmates = 5, count_of_teachers = 3, count_of_groups = 3;
    Student* class_mates = new Student[count_of_classmates];
    Teacher* teachers = new Teacher[count_of_teachers];
    Groups* groups = new Groups[count_of_groups];

    // "Fill" all of u want
    Fill(groups);

    int flag = 0; // Rule
    while (flag == 0)
    {
        int count_of_menu_items = 8, choose = 0;
        string menu_items[8];

        menu_items[0] = "Cout exellent guys - 1";
        menu_items[1] = "Middle mark(min, max) - 2";
        menu_items[2] = "Children that birth in one day - 3";
        menu_items[3] = "Count of beneficiary in the group - 4";
        menu_items[4] = "Find the same surname - 5";
        menu_items[5] = "Find the oldest student - 6";
        menu_items[6] = "Count of students that have mark bigger than 8.5 - 7";
        menu_items[7] = "Exit - 8";
        choose = isMenu(menu_items, count_of_menu_items);
        choose++;

        switch (choose)
        {
        case 1: {
            // Cout exellent guys
            int isMarks = 0;
            for (int i = 0; i < count_of_groups; i++)
            {
                for (int j = 0; j < count_of_classmates; j++)
                {
                    for (int y = 0; y < 10; y++)
                    {
                        if (groups[i].student[j].marks[y] >= 10)
                        {
                            isMarks++;
                        }
                    }

                    if (isMarks == 10)
                    {
                        cout << "-------------Group " << i << "-------------" << endl;
                        cout << "--------Student exellent---------" << endl;

                        cout << "First name: " << groups[i].student[j].FirstName << endl;
                        cout << "Last name: " << groups[i].student[j].LastName << endl;

                        cout << "---------------------------------" << endl;
                    }

                    isMarks = 0;
                }
            }
        } break;
        case 2: {
            // Middle mark (min and max)
            int isSum[3][5];
            int the_middle_mark_of_group;
            int max = 0, sum = 0, group_max = 0, min = 999, group_min = 0;

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    for (int r = 0; r < 10; r++)
                    {
                        isSum[i][j] = groups[i].student[j].marks[r];

                        sum += isSum[i][j];
                    }
                }

                the_middle_mark_of_group = sum;
                the_middle_mark_of_group /= 10;

                // Max
                if (the_middle_mark_of_group > max)
                {
                    max = the_middle_mark_of_group;
                    group_max = i;
                }

                // Min
                if (the_middle_mark_of_group < min)
                {
                    min = the_middle_mark_of_group;
                    group_min = i;
                }

                sum = 0;
            }

            cout << "_________________________________" << endl;
            cout << "Group: " << group_max << endl;
            cout << "The middle group mark of max: " << max << endl;
            cout << "_________________________________" << endl;

            cout << endl;

            cout << "Group: " << group_min << endl;
            cout << "The middle group mark of min: " << min << endl;
            cout << "_________________________________" << endl;

        } break;
        case 3: {
            // Children that birth in one day
            int same_data[3][5];

            for (int i = 0; i < 3; i++)
            {
                cout << "Group - " << i << endl;

                for (int j = 0; j < 5; j++)
                {
                    same_data[i][j] = groups[i].student[j].data.day;

                    for (int n = 0; n < 5; n++)
                    {
                        if (same_data[i][j] == groups[i].student[n].data.day)
                        {
                            if (j != n)
                            {
                                cout << same_data[i][j]; cout << " = "; cout << same_data[i][j] << "(" << j << " = " << n << ")" << endl;
                            }
                            else {
                                continue;
                            }
                        }
                    }
                }
            }
        } break;
        case 4: {
            // Count of beneficiary in the group
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (groups[i].student[j].beneficiary == 1)
                    {
                        groups[i].beneficiarys_count[i] += 1;
                    }
                    else {
                        continue;
                    }
                }
                cout << "Count of beneficiary persons (Group " << i << ") " << groups[i].beneficiarys_count[i] << endl;
            }
        } break;
        case 5: {
            // Find the same surname
            string same_lastname[3][5];

            for (int i = 0; i < 3; i++)
            {
                cout << "-------------Group " << i << "-------------" << endl;

                for (int j = 0; j < 5; j++)
                {
                    same_lastname[i][j] = groups[i].student[j].LastName;

                    for (int n = 0; n < 5; n++)
                    {
                        if (same_lastname[i][j] == groups[i].student[n].LastName)
                        {
                            if (j != n)
                            {
                                cout << same_lastname[i][j]; cout << " = "; cout << same_lastname[i][j] << "(" << j << " = " << n << ")" << endl;
                            }
                        }
                    }
                }
            }
        } break;
        case 6: {
            // Find the oldest student
            int max_age_id_i = 0, max_age_id_j = 0;
            int max_age_age = 0, max_age_day = 0, max_age_month = 0;

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (groups[i].student[j].age > max_age_age && groups[i].student[j].data.day > max_age_day && groups[i].student[j].data.month > max_age_month)
                    {
                        max_age_age = groups[i].student[j].age;
                        max_age_day = groups[i].student[j].data.day;
                        max_age_month = groups[i].student[j].data.month;

                        max_age_id_i = i;
                        max_age_id_j = j;
                    }
                }
            }

            groups[max_age_id_i].student[max_age_id_j].Print(&groups[max_age_id_i].teacher[max_age_id_i]);
        } break;
        case 7: {
            // Count of students that have mark bigger than 8.5
            int sum = 0, count_of = 0;
            int sum_of[3][5];

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    for (int n = 0; n < 10; n++)
                    {
                        sum += groups[i].student[j].marks[n];
                    }

                    sum_of[i][j] = sum / 10;
                    sum = 0;
                }
            }

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (sum_of[i][j] >= 8.5)
                    {
                        count_of++;
                    }
                }
            }

            cout << "Count of students that have mark bigger than 8.5: " << count_of << endl;
        } break;
        case 8: {
            // Exit of the program
            flag = 1;
        } break;
        default: cout << "Error" << endl; // Else
            break;
        }
    }
}

int main()
{
    srand(time(NULL));
    // Main
    Menu();

    return 0;
}