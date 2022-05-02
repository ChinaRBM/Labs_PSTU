#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	ofstream Finp;
	Finp.open("F1.txt");
	Finp << "Afsad nigger\n" << "Comedy\n" << "Hello,friend!\n" << "Asteriks and Obelix\n" << "And?\n" << "How are you?\n" << "End\n" << "Apple\n" << "ABOBAB";
	Finp.close();
	ifstream F1;
	ofstream F2;
	F1.open("F1.txt");
	F2.open("F2.txt");
	string line = "";
	char letter = 'a';
	int count=0;
	bool flag=false;
	while (getline(F1, line))
	{

		if (line[0]==letter)
		{

			for (int i=0;i< 1000; i++)
			{
				if ((line[i] != ' ')&& (flag==false))
				{
					count++;
					if (line[i] == ' ')
					{
						flag = !flag;
					}
				}
			}
			F2 << line << '\n';
		}
	}
	F1.close();
	cout << "Кол-во символов: " << count;
	F2.close();
}