#include <iostream>

using namespace std;

struct point
{
	int data;
	point* next;
	point* prev;
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
		cout << p->data << "  ";
		p = p->next;
	}
	cout << endl;
}

point* del_point(point* beg, int n)
{
	bool fl = false;
	point* p = beg;
	if ((p->data) % 2 == 0 && fl == false)
	{
		beg = beg->next;
		delete p;
		fl = true;
		return beg;
	}
	for (int i = 0; i < n && p != 0; i++)
	{
		p = p->next;
		if (p != nullptr && (p->next->data)%2==0 && fl==false)
		{
			point* r = p->next;
			p->next = r->next;
			delete r;
			fl = true;
			return beg;
		}
	}
}

int main()
{
	int n = 10;
	point* beg = make_list(n);
	del_point(beg, n);
	print_list(beg);
}