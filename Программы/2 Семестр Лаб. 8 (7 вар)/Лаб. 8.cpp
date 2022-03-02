
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <cstdlib>

using namespace std;

struct Student
{
    string fio = "", adres = "", group = "", name = "", surname = "", otch = "", ulica = "", chislo = "";
    int rating;
};

void objstruct(Student* student)
{
    string surname[9] = { "Годунин","Волков", "Галавтдинов", "Лекомцев", "Лебедев", "Ипатов", "Полковников","Гребнев","Ахунов" };
    string name[10] = { "Роман", "Никита", "Тимофей", "Дмитрий", "Алексей", "Максим","Станислав", "Богдан","Тихон","Руслан" };
    string otch[7] = { "Алексеевич", "Вячеславович", "Борисович", "Евгеньевич", "Андреевич", "Тимофеевич","Дмитриевич" };
    string ulica[10] = { "Ленина", "Советская", "Екатерининская", "Куйбышева", "Пушкина", "Сибирская","Окулова", "Плеханова", "Стахановская", "Дружбы" };
    string group[4] = { "ИВТ-21-1б", "ИВТ-21-2б", "РИС-21-1б", "РИС-21-2б" };
    (*student).surname = surname[rand() % 9];
    (*student).name = name[rand() % 10];
    (*student).otch = otch[rand() % 7];
    (*student).ulica = ulica[rand() % 10];
    (*student).chislo = rand()%70+1;
    (*student).group = group[rand() % 4];
    (*student).rating = rand() % 100 + 1;
}


void print_stud(Student student, ofstream& stud)
{
    if (student.surname == "")
    {
        stud << "\n ФИО: " << student.fio << "\n";
    }
    else
    {
        stud << "\n ФИО: " << student.surname << " " << student.name << " " << student.otch << "\n";
    }
    if (student.chislo == "")
    {
        stud << "Адрес: " << student.ulica << "\n";
    }
    else
    {
        stud << "Адрес: " << student.ulica << " " << student.chislo << "\n";
    }
    stud << "Группа: " << student.group << "\n";
    stud << "Рейтинг: " << student.rating << "\n";
}

void new_add(Student* student)
{
    string fio, ulica, group;
    int rating, chislo;
    cout << "Введите ФИО студента" << endl;
    cin >> fio;
    cout << "Введите улицу проживания студента" << endl;
    cin >> ulica;
    cout << "Введите номер улицы проживания студента" << endl;
    cin >> chislo;
    cout << "Введите группу студента" << endl;
    cin >> group;
    cout << "Введите рейтинг студента" << endl;
    cin >> rating;
    (*student).fio = fio;
    (*student).ulica = ulica;
    (*student).chislo = chislo;
    (*student).group = group;
    (*student).rating = rating;
}

int main()
{
    int n, rate;
    setlocale(LC_ALL, "rus");
    ofstream stud;
    stud.open("student.txt");
    if (!stud)
    {
        perror("\n Ошибка в открытии файла");
        exit(1);
    }
    else
    {
        cout << "Введите количество студентов: " << endl;
        cin >> n;
        cout << "Введите рейтинг: " << endl;
        cin >> rate;
        Student* student = new Student[n+1];

        for (int i = 0; i < n; i++)
        {
            objstruct(&student[i]);
            if (student[i].rating>rate)
            {
                print_stud(student[i], stud);
            }
        }
        new_add(&student[n]);
        print_stud(student[n], stud);
    }
}