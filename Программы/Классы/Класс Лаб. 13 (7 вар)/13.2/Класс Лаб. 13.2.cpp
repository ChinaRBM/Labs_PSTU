#include<iostream>
#include <queue>
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

typedef queue<Money> Qu;
typedef vector<Money> Tvector;
Money sravn;
Money p;

Qu make_queue(int n)
{
	Qu s;
	Money pr;
	for (int i = 0; i < n; i++)
	{
		cin >> pr;
		s.push(pr);
	}
	return s;
}

Tvector copy_queue_to_vector(Qu s)
{
	Tvector d;
	while (!s.empty())
	{
		d.push_back(s.front());
		s.pop();
	}
	return d;
}

Qu copy_vector_to_queue(Tvector d)
{
	Qu s;
	for (int i = 0; i < d.size(); i++)
		s.push(d[i]);
	return s;
}

void print_queue(Qu s)
{
	Tvector temp;
	temp = copy_queue_to_vector(s);
	while (!s.empty())
	{
		cout << s.front() << " ";
		s.pop();
	}
	s = copy_vector_to_queue(temp);
	cout << '\n';
}

struct Equal_s
{
	bool operator() (Money t)
	{
		return t == sravn;
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
		if (d[i] < min)
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
	cout << "Введите размер очереди: ";
	cin >> n;
	Qu s = make_queue(n);
	cout << "\nВведённая очередь:\n";
	print_queue(s);

	Tvector d = copy_queue_to_vector(s);
	Tvector::iterator i;
	cout << "Ищем минимальный элемент и добавляем его в конец очереди:\n";
	i = min_element(d.begin(), d.end());
	Money min = *i;
	d.push_back(min);
	s = copy_vector_to_queue(d);
	cout << "Очередь после изменения:\n";
	print_queue(s);

	cout << "Создадим ключ поиска типа Money:\n";
	cin >> sravn;

	d = copy_queue_to_vector(s);
	cout << "Очередь после удаления элементов, совпадающих с ключом:\n";
	d.erase(remove_if(d.begin(), d.end(), Equal_s()), d.end());
	s = copy_vector_to_queue(d);
	print_queue(s);

	cout << "\nДобавление минимального и максимального значений очереди: " <<'\n';
	p = minmax(d);

	d = copy_queue_to_vector(s);
	for_each(d.begin(), d.end(), Foo);
	s = copy_vector_to_queue(d);
	cout << "Очередь после прибавления к каждому его элементу минимального и максимального значений:\n";
	print_queue(s);
	return 0;
}