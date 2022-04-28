#include<iostream>
#include<ctime>
using namespace std;
int max_size = 6;
class Multitude
{
private:
	int size;
	int* array;
public:
	Multitude();
	Multitude(int size);
	Multitude(const Multitude& other);
	~Multitude();
	void show()
	{
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;
	}
	int& operator () () { return size; }
	Multitude operator*(const Multitude& other);
	int& operator [](int index);
	Multitude operator --();
};

Multitude::Multitude()
{
	size = 0;
	array = 0;
}

Multitude::Multitude(int size)
{
	this->size = size;
	if (size > max_size) { throw 1; }
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100 + 1;
	}

}
Multitude::Multitude(const Multitude& other)
{
	this->size = other.size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = other.array[i];
	}
}
Multitude::~Multitude()
{
}

Multitude Multitude:: operator *(const Multitude& other)
{
	Multitude tmp(size);
	for (int i = 0; i < size; i++)
	{
		tmp.array[i] = array[i] * other.array[i];
	}
	delete[]array;
	return tmp;
}

int& Multitude::operator [](int index)
{

	if (index >= 0 && index < size)
	{
		return array[index];
	}
	else
	{
		cout << endl;
		throw 2;
	}
}

Multitude Multitude::operator --()
{
	if (size == 0) { throw 3; }
	if (size == 1)
	{
		size = 0;
		delete[]array;
		array = 0;
		return*this;
	}
	int tmp_size = size--;
	Multitude tmp(tmp_size);
	for (int i = 0; i < tmp_size; i++)
	{
		tmp.array[i] = 0;
	}
	for (int i = 0; i < tmp_size; i++)
	{
		tmp.array[i] = array[i];
	}
	return tmp;
	delete[]array;
}


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	try
	{
		Multitude first(2);
		first.show();
		--first;
		first.show();
		cout << "Элемент с избранным индексом: " << first[0] << endl;
		cout << "Размер множества: " << first() << endl;
		Multitude second(2);
		second.show();
		Multitude third(2);
		third = first * second;
		third.show();
	}
	catch (int num)
	{
		cout << "Ошибка с кодом: " << num << endl;
		cout << "1 - выбранный размер множества недопустим. 2 - выбранный индекс недопустим. 3 - нельзя удалить элемент, размер равен 0" << endl;
	}
	return 0;
}