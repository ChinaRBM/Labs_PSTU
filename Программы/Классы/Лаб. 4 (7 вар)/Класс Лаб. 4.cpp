#include<iostream>
#include<cmath>
using namespace std;

class Pair
{
protected:
	int first, second;
public:
	Pair(void);
	Pair(int, int);
	Pair(const Pair&);
	virtual ~Pair(void);
	int GetFirst() { return first; }
	int GetSecond() { return second; }
	void SetFirst(int x) { first = x; }
	void SetSecond(int x) { second = x; }
	Pair& operator =(const Pair&);
	Pair operator -(const Pair&);
	friend istream& operator>>(istream& in, Pair& c);
	friend ostream& operator<<(ostream& out, const Pair& c);
};

Pair::Pair(void)
{
	first = 0;
	second = 0;
}

Pair::Pair(int f, int s)
{
	first = f;
	second = s;
}

Pair::Pair(const Pair& t)
{
	first = t.first;
	second = t.second;
}

Pair::~Pair(void) {}

Pair& Pair::operator=(const Pair& c)
{
	if (&c == this)
		return *this;
	first = c.first;
	second = c.second;
	return *this;
}

istream& operator>>(istream& in, Pair& c)
{
	cout << "First: ";
	in >> c.first;
	cout << "Second: ";
	in >> c.second;
	return in;
}

ostream& operator<<(ostream& out, const Pair& c)
{
	out << c.first << ',' << c.second;
	return out;
}

Pair Pair::operator-(const Pair& c)
{
	Pair p;
	p.first = first - c.first;
	p.second = second - c.second;
	return p;
}

class Rational : public Pair
{
protected:
	int upper;
	int down;
public:
	Rational(void);
	Rational(int, int);
	Rational(const Rational&);
	Rational& operator=(const Rational&);
	Rational operator+(const Rational&);
	Rational operator-(const Rational&);
	Rational operator*(const Rational&);
	friend istream& operator>>(istream& in, Rational& t);
	friend ostream& operator<<(ostream& out, const Rational& t);
};

Rational::Rational(void)
{
	upper = 0;
	down = 0;
}

Rational::Rational(int f, int s)
{
	upper = f;
	down = s;
}

Rational::Rational(const Rational& t)
{
	upper = t.upper;
	down = t.down;
}

Rational& Rational::operator=(const Rational& t)
{
	if (&t == this)
		return *this;
	upper = t.upper;
	down = t.down;
	return *this;
}

Rational Rational::operator-(const Rational& t)
{
	Rational p;
	p.upper = (upper * t.down)-(t.upper * down);
	p.down = down*t.down;
	return p;
}

Rational Rational::operator+(const Rational& t)
{
	Rational p;
	p.upper = (upper * t.down) + (t.upper * down);
	p.down = down * t.down;
	return p;
}

Rational Rational::operator*(const Rational& t)
{
	Rational p;
	p.upper = (upper * t.down) * (t.upper * down);
	p.down = down * t.down;
	return p;
}

istream& operator>>(istream& in, Rational& c)
{
	cout << "Upper: ";
	in >> c.upper;
	cout << "Down: ";
	in >> c.down;
	return in;
}


ostream& operator<<(ostream& out, const Rational& t)
{
	out << t.upper<< "/" << t.down;
	return out;
}

void f1(Pair& c)
{
	c.SetFirst(100);
	cout << c << '\n';
}

Pair f2()
{
	Rational l(100, 500);
	return l;
}

int main()
{
	Pair a;
	cin >> a;
	cout << a << '\n';
	Pair b(5, 5);
	cout << b << '\n';
	Pair c;
	c = a - b;
	cout << "a + b = " << c << '\n';
	Rational a1;
	cin >> a1;
	cout << a1 << '\n';
	Rational b1(5, 1);
	cout << b1 << '\n';
	Rational c1;
	c1 = a1 + b1;
	cout << "a1 + b1 = " << c1 << '\n';
	c1 = a1 - b1;
	cout << "a1 - b1 = " << c1 << '\n';
	c1 = a1 * b1;
	cout << "a1 * b1 = " << c1 << '\n';
	Rational c2;
	f1(c2);
	a = f2();
	cout << a;
	return 0;
}