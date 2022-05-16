#include<iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

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
	if(temp1<temp2)
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

typedef vector<Money> Tvector;
Money s;
Money p;
Tvector make_vector(int n)
{
	Money a;
	Tvector d;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		d.push_back(a);
	}
	return d;
}

Tvector make_empty_vector(int n)
{
	Money a(0, 0);
	Tvector k;
	for (int i = 0; i < n; i++)
	{
		k.push_back(a);
	}
	return k;
}

void print_vector(Tvector d)
{
	if (!d.empty())
	{
		for (int i = 0; i < d.size(); i++)
			cout << d[i] << " ";
	}
	else
	{
		cout << "Вектор пуст!";
	}
	cout << '\n';
}

struct Equal_s
{
	bool operator() (Money t)
	{
		return t == s;
	}
};

Money minmax(Tvector d)
{
	Money min = d[0];
	Money max = d[0];
	int size = d.size();
	for (int i = 1; i < size; i++)
	{
		if (d[i] > max)
		{
			max = d[i];
		}
		if (d[i]< min)
		{
			min = d[i];
		}
	}
	return min + max;
}

void Foo(Money& b)
{
	b = b + p;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int n = 0;
	cout << "Введите размер вектора: ";
	cin >> n;
	Tvector d = make_vector(n);
	cout << "\nВведенный вектор:\n";
	print_vector(d);

	Tvector::iterator i;
	cout << "Ищем минимальный элемент и добавляем его в конец вектора:\n";
	i = min_element(d.begin(), d.end());
	Money min = *i;
	d.push_back(min);
	print_vector(d);

	cout << "Создадим ключ поиска типа Money:\n";
	cin >> s;

	cout << "Вектор после удаления элемента, совпадающего с ключом:\n";
	d.erase(remove_if(d.begin(), d.end(), Equal_s()), d.end());
	print_vector(d);

	cout << "\nДобавление каждому минимального и максимального значений вектора: " << '\n';
	p = minmax(d);
	for_each(d.begin(), d.end(), Foo);
	print_vector(d);
	return 0;
}