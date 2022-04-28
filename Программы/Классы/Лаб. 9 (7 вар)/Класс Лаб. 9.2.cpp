#include<iostream>
#include<ctime>
#include<string>
using namespace std;
int max_size = 6;
class error
{
private:
	string msg;
public:
	error(string msg)
	{
		this->msg = msg;
	}
	void what()
	{
		cout << "Произошла ошибка: " << msg << endl;
	}
};
class Multitude
{
private:
	int size;
	int* array;
public:
	Multitude();
	Multitude(int size);
	Multitude(int size, int* array);
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
	Multitude operator * (const Multitude& other);
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
	if (size > max_size) { throw error("Недопустимый размер множества!"); }
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100 + 1;
	}

}

Multitude::Multitude(int size, int* array)
{
	this->size = size;
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		this->array[i] = array[i];
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

Multitude Multitude::operator * (const Multitude& other)
{
	Multitude tmp(size);
	for (int i = 0; i < size; i++)
	{
		tmp.array[i] = array[i] * other.array[i];
	}
	delete[]array;
	return tmp;
}

int& Multitude:: operator [](int index)
{

	if (index >= 0 && index < size)
	{
		return array[index];
	}
	else
	{
		cout << endl;
		throw error("Недопустимый индекс");
	}
}

Multitude Multitude:: operator --()
{
	if (size == 0) { throw error("Невозможно удалить элемент, размер множества равен 0"); }
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
		Multitude first(3);
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
	catch (error ER)
	{
		ER.what();
	}
	return 0;
}