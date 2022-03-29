#include <iostream>

using namespace std;

struct queue
{
	int data;
	queue* next;
};


queue* add(int n)
{
	int k;
	queue* first;
	queue* p, * r;
	first = new(queue);
	cout << "Введите элементы: " << endl;
    cin >> k;
	first->data = k;
	first->next = 0;
	p = first;
	for (int i = 0; i < n - 1; i++)
	{
		r = new(queue);
		cin >> k;
		r->data = k;
		r->next = 0;
		p->next = r;
		p = r;

	}
	return first;
}

void print(queue* first,bool fl)
{
	queue* p = first;
	while (p != 0)
	{
		if (((p->data)%2==0)&&(fl==false))
		{
			p = p->next;
			fl = true;
		}
		else
		{
			cout << p->data << "\t";
			p = p->next;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	bool fl = false;
	cout << "Введите количество элементов: ";
	cin >> n;
	queue* first = add(n);
	print(first,fl);
	return 0;
}