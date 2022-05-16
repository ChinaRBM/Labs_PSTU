#include<iostream>
#include<map>
#include <functional>
#include <algorithm>
using namespace std;

int n;

class Money
{
	long rub;
	int kop;
public:
	Money() { rub = 0, kop = 0; };
	Money(long r, int k) { rub = r, kop = k; };
	Money(const Money& t) { rub = t.rub, kop = t.kop; };
	~Money() {};
	long GetRub() { return rub; };
	int GetKop() { return kop; };
	void SetRub(long r) { rub = r; };
	void SetKop(int k) { kop = k; };
	Money& operator =(const Money& t);
	Money& operator +(const Money& t);
	Money& operator /(const Money& t);
	Money& operator *(const Money& t);
	friend istream& operator>>(istream& in, Money& t);
	friend ostream& operator<<(ostream& in, Money& t);
	bool operator<(Money& t);
	bool operator>(Money& t);
	Money operator/(int k);
	bool operator==(const Money& t);
};

bool Money::operator==(const Money& t)
{
	if (rub == t.rub && kop == t.kop) return true;
	return false;
}

Money Money::operator/(int k)
{
	int temp1 = rub * 100 + kop;
	temp1 = temp1 / k;
	Money p;
	p.rub = temp1 / 100;
	p.kop = temp1 % 100;
	return *this;
}

Money& Money::operator=(const Money& t)
{
	if (&t == this)
		return *this;
	rub = t.rub;
	kop = t.kop;
	return *this;
}

Money& Money::operator +(const Money& t)
{
	int temp1 = rub * 100 + kop;
	int temp2 = t.rub * 100 + t.kop;
	Money p;
	p.rub = (temp1 + temp2) / 100;
	p.kop = (temp1 + temp2) % 100;
	return p;
}

Money& Money::operator/(const Money& t)
{
	int temp1 = rub * 100 + kop;
	int temp2 = t.rub * 100 + t.kop;
	Money n;
	n.rub = ((temp1 * 100) / temp2) / 100;
	n.kop = ((temp1 * 100) / temp2) % 100;
	return n;
}

Money& Money::operator*(const Money& t)
{
	int temp1 = rub * 100 + kop;
	int temp2 = t.rub * 100 + t.kop;
	Money n;
	n.rub = ((temp1 * temp2) / 10000);
	n.kop = ((temp1 * temp2) % 10000);
	return n;
}

istream& operator>>(istream& in, Money& t)
{
	cout << "Рубли: ";
	in >> t.rub;
	cout << "Копейки: ";
	in >> t.kop;
	return in;
}

ostream& operator<<(ostream& out, Money& t)
{
	return (out << t.rub << ',' << t.kop);
}

bool Money::operator<(Money& t)
{
	int temp1 = rub * 100 + kop;
	int temp2 = t.rub * 100 + t.kop;
	if (temp1 < temp2)
		return true;
	else  return false;
}

bool Money::operator>(Money& t)
{
	int temp1 = rub * 100 + kop;
	int temp2 = t.rub * 100 + t.kop;
	if (temp1 > temp2) return true;
	else  return false;
}

typedef map<int,Money> Tmp;
typedef Tmp::iterator it;

Money s;

Tmp make_mp(int n)
{
	Tmp a;
	Money p;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		a.insert(make_pair(i, p));
	}

	return a;
}

void print_mp(Tmp& a)
{
	it j= a.begin();
	for (int i = 0;j != a.end(); j++, i++) 
	{
		cout << i << ") " << j->second << endl;
	}
}

void add_min_elem(Tmp& a)
{
	Money minimal=a[0];
	Tmp::iterator k=a.begin();
	while (k != a.end())
	{
		if (k->second < minimal)
		{
			minimal = k->second;
		}
		k++;
	}
	a.insert(make_pair(a.size(),minimal));
}

void del_elem(Tmp& a, Money& n1)
{
	bool flag= false;
	for (int i = 0; i < a.size(); i++)
	{
		if ((a[i] == n1)&&(flag == false))
		{
			a.erase(i);
			flag = true;
		}
	}
}

void add_elem(Tmp& a, Money& p)
{
	Tmp b;
	it i = a.begin();

	while (i != a.end())
	{
		for (int j = 0; j < a.size(); j++)
		{
			Money buf = i->second;
			b.insert(make_pair(j, buf + p));
			i++;
		}
	}

	a = b;
}

Money minmax(Tmp d)
{
	Money min = d[0];
	Money max = d[0];
	it p= d.begin();
	while(p != d.end())
	{
		if (p->second > max)
		{
			max = p->second;
		}
		if (p->second < min)
		{
			min = p->second;
		}
		p++;
	}
	return min + max;
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введите размер словаря: "; cin >> n;

	Tmp a = make_mp(n);
	cout << "\nСловарь:\n";
	print_mp(a);

	add_min_elem(a);
	cout << "\nДобавляем минимальный элемент:\n";
	print_mp(a);

	Money n1;
	cout << "Введите ключ: \n "; cin >> n1;
	del_elem(a, n1);
	print_mp(a);

	s = minmax(a);
	add_elem(a, s);
	cout <<"\nДобавление каждому суммы минимума и максимума: \n";
	print_mp(a);
	return 0;
}