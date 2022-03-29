#include<iostream>
#include<string>
using namespace std;
class PC
{
public:
	string CPU;
	int RAM;
	int HDD;
	PC()
	{
		CPU = "Ryzen 7 1700";
		RAM = 16;
		HDD = 1000;
		cout << "Конструктор без параметров для обьекта ->" << this << endl;

	}
	PC(string VolCPU, int VolRAM, int VolHDD)
	{
		CPU = VolCPU;
		RAM = VolRAM;
		HDD = VolHDD;
		cout << "Конструктор с параметрами для обьекта ->" << this << endl;

	}
	PC(const PC& third)
	{
		CPU = third.CPU;
		RAM = third.RAM;
		HDD = third.HDD;
		cout << "Вызван конструктор копирования ->" << this << endl;

	}
	~PC(){}
	string GetCPU()
	{
		cout << "Марка процессора: " << CPU << endl;
		return CPU;
	}
	void SetCPU(string ValueCPU)
	{
		CPU = ValueCPU;
	}
	int GetRAM()
	{
		cout << "Объём опер. памяти: " << RAM << endl;
		return RAM;
	}
	void SetRAM(int ValueRAM)
	{
		RAM = ValueRAM;
	}
	int GetHDD()
	{
		cout << "Объём жест. диска: " << HDD << endl;
		return HDD;
	}
	void SetHDD(int ValueHDD)
	{
		HDD = ValueHDD;
	}
	void show()
	{
		cout << "Процессор: " << CPU << endl << "Объём Опер. Памяти (ГБ): " << RAM << endl << "Объём жест. диска (ГБ): " << HDD << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "Rus");
	PC first;
	first.show();
	PC second("Ryzen 5 2600", 12, 700);
	second.show();
	PC third(*&first);
	third.show();
	PC ext;
	ext.SetCPU("Intel i7 9900k");
	ext.GetCPU();
	ext.SetRAM(8);
	ext.GetRAM();
	ext.SetHDD(500);
	ext.GetHDD();
	return 0;
}