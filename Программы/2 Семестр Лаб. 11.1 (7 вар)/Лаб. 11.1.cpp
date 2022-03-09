#include <iostream>

using namespace std;

struct point
{
	double data;
	point* next;
};

point* make_list(int n)
{
	point* beg;
	point* p, * r;
	beg = new(point);
	cin >> beg->data;
	beg->next = 0;
	p = beg;
	for (int i = 0; i < n - 1; i++)
	{
		r = new(point);
		cin >> r->data;
		r->next = 0;
		p->next = r;
		p = r;
	}
	return beg;
}

void print_list(point* beg)
{
	point* p = beg;
	while (p != nullptr)
	{
		cout << p->data << "\t";
		p = p->next;
	}
}

point* add_point(point* beg, int n)
{
	point* p = beg;
	point* New = new(point);
    cin >> New->data;
	if (p->data < 0)
	{
		New->next = beg;
		beg = New;
		return beg;
	}
	for (int i = 0;i < n && p != 0; i++)
	{
		p = p->next;
		if (p != nullptr && p->data < 0)
		{
			New->next = p->next;
			p->next = New;
		}
	}
	return beg;
}

int main()
{
	int n = 10;
	point* beg = make_list(n);
	add_point(beg,n);
	print_list(beg);
}
