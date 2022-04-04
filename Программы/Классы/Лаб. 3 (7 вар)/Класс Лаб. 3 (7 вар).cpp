#include<iostream>
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
};

Money& Money::operator=(const Money& t)
{
	if (&t == this)
		return *this;
	rub = t.rub;
	kop = t.kop;
	return *this;
}

Money& Money::operator+(const Money& t)
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
	n.rub = ((temp1 *100)/ temp2) / 100;
	n.kop = ((temp1 *100)/ temp2) % 100;
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

int main()
{
	setlocale(LC_ALL, "rus");
	Money a;
	Money b;
	Money c;
	Money d;
	Money m;
	Money k;
	cin >> a;
	cin >> b;
	cin >> k;
	c = a + b;
    d = c / k;
	m = c * k;
	cout << "a=" << a << '\n';
	cout << "b=" << b << '\n';
	cout << "(a+b)*k=" << m << '\n';
	cout << "(a+b)/k=" << d << '\n';
}