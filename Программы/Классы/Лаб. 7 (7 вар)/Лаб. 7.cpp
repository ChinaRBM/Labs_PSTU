#include <iostream>
using namespace std;

template <class T>
class Multitude
{
protected:
	int size;
	T* data;
public:
	Multitude(int s, T k);
	Multitude(const Multitude<T>& p);
	~Multitude();
	T& operator[](int index);
	Multitude operator*(const Multitude<T>& p);
	Multitude& operator=(const Multitude<T>& p);
	int& operator()();
	friend ostream& operator<< <>(ostream& out, const Multitude<T>& p);
	friend istream& operator>> <>(istream& in, Multitude<T>& p);
};

template <class T>
Multitude<T>::Multitude(int s, T k)
{
	size = s;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = k;
}

template <class T>
Multitude<T>::Multitude(const Multitude<T>& p)
{
	size = p.size;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = p.data[i];
}

template <class T>
Multitude<T>::~Multitude()
{
	delete[]data;
	data = 0;
}

template <class T>
Multitude<T>& Multitude<T>::operator=(const Multitude<T>& p)
{
	if (this == &p) return *this;
	size = p.size;
	if (data != 0) delete[]data;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = p.data[i];
	return *this;
}

template <class T>
Multitude<T> Multitude<T>::operator*(const Multitude<T>& p)
{
	int l;
	if (size < p.size) l = p.size;
	else l = size;
	T jija(0, 0);
	Multitude<T> temp1(l, jija);
	for (int i = 0; i < size; i++)
	{
		temp1.data[i].rub *= data[i].rub;
		temp1.data[i].kop *= data[i].kop;
	}
	for (int i = 0; i < p.size; i++)
	{
		temp1.data[i].rub *= p.data[i].rub;
		temp1.data[i].kop *= p.data[i].kop;
	}
	return temp1;
}

template <class T>
T& Multitude<T>::operator[](int index)
{
	if (index < size) return data[index];
	else cout << "ОШИБКА ДОСТУПА! (index>size)";
}

template <class T>
int& Multitude<T>::operator()()
{
	return size;
}

template <class T>
ostream& operator<<(ostream& out, const Multitude<T>& p)
{
	for (int i = 0; i < p.size; i++)
		out << p.data[i] << " ";
	return out;
}

template <class T>
istream& operator>>(istream& in, Multitude<T>& p)
{
	for (int i = 0; i < p.size; i++)
		in >> p.data[i];
	return in;
}

class Money
{
public:
	long rub;
	int kop;
public:
	Money(void);
	Money(int, int);
	Money(const Money&);
	~Money() {};
	Money& operator=(const Money&);
	Money operator+(Money k);
	friend ostream& operator<< (ostream& out, const Money&);
	friend istream& operator>> (istream& in, Money&);
};

Money::Money(void)
{
	rub = kop = 0;
}

Money::Money(int rub, int kop)
{
	this->rub = rub;
	this->kop = kop;

}

Money::Money(const Money& p)
{
	this->rub = p.rub;
	this->kop = p.kop;
}

Money& Money::operator=(const Money& p)
{
	this->rub = p.rub;
	this->kop = p.kop;
	return *this;
}

Money Money::operator+(Money k)
{
	int t = rub * 100 + kop;
	int kt = k.rub * 100 + k.kop;
	t += kt;
	Money temp(t / 100, t % 100);
	return temp;
}


ostream& operator<< (ostream& out, const Money& p)
{
	out << p.rub << "," << p.kop;
	return out;
}

istream& operator>> (istream& in, Money& p)
{
	cout << "\nrub: "; in >> p.rub;
	cout << "\nkop: "; in >> p.kop;
	if (p.kop > 100)
	{
		p.rub += p.kop / 100;
		p.kop = p.kop % 100;
	}
	return in;
}


int main()
{
	setlocale(LC_ALL, "rus");
	int k;
	cin >> k;
	Money t;
	cin >> t;
	cout << t << '\n';
	Multitude<Money> a(5, t);
	cout << a << '\n';
	cin >> a;
	cout << a;
	cout << '\n';
	Multitude<Money> c(5, t);
	Multitude<Money> b(10, t);
	cout << b << '\n';
	b = a;
	cout << b << '\n';
	cout << a[2] << '\n';
	cout << "size a: " << a() << '\n';
	b = a * c;
	cout << b << '\n';
	return 0;
}