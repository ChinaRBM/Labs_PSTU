#include <iostream>
using namespace std;

class Iterator
{
	friend class Multitude;
protected:
	int* elem;
public:
	Iterator() { elem = 0; }
	Iterator(const Iterator& it) { elem = it.elem; }
	bool operator== (const Iterator& it) { return elem = it.elem; }
	bool operator!=(const Iterator& it) { return elem != it.elem; }
	void operator++() { ++elem; }
	void operator--() { --elem; }
	int& operator* () const { return*elem; }
};

class Multitude
{
protected:
	int size;
	int* data;
	Iterator beg;
	Iterator end;
public:
	Multitude(int s, int k = 0);
	Multitude(const Multitude& p);
	~Multitude();
	int& operator[](int index);
	Multitude operator+(const int k);
	Multitude operator*(const Multitude& p);
	Multitude& operator=(const Multitude& p);
	int& operator()();
	friend ostream& operator<<(ostream& out, const Multitude& p);
	friend istream& operator>>(istream& in, Multitude& p);

	Iterator first() { return beg; }
	Iterator last() { return end; }
};

Multitude::Multitude(int s, int k)
{
	size = s;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = k;
	beg.elem = &data[0];
	end.elem = &data[size];
}

Multitude::Multitude(const Multitude& p)
{
	size = p.size;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = p.data[i];
	beg = p.beg;
	end = p.end;
}

Multitude::~Multitude()
{
	delete[]data;
	data = 0;
}

Multitude Multitude::operator*(const Multitude& p)
{
	int l;
	if (size < p.size) l = p.size;
	else l = size;
	Multitude temp1(l);
	for (int i = 0; i < size; i++)
		temp1.data[i] *= data[i];
	for (int i = 0; i < p.size; i++)
		temp1.data[i] *= p.data[i];
	return temp1;
}

Multitude& Multitude::operator=(const Multitude& p)
{
	if (this == &p) return *this;
	size = p.size;
	if (data != 0) delete[]data;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = p.data[i];
	beg = p.beg;
	end = p.end;
	return *this;
}

int& Multitude::operator[](int index)
{
	if (index < size) return data[index];
	else cout << "ОШИБКА ДОСТУПА! (index>size)";
}

Multitude Multitude::operator+(const int k)
{
	Multitude temp(size);
	for (int i = 0; i < size; i++)
		temp.data[i] = data[i] + k;
	return temp;
}

int& Multitude::operator()()
{
	return size;
}

ostream& operator<<(ostream& out, const Multitude& p)
{
	for (int i = 0; i < p.size; i++)
		out << p.data[i] << " ";
	return out;
}

istream& operator>>(istream& in, Multitude& p)
{
	for (int i = 0; i < p.size; i++)
		in >> p.data[i];
	return in;
}


int main()
{
	setlocale(LC_ALL, "rus");

	Multitude a(5);
	Multitude b(10);
	Multitude c(10);
	cout << "Размер a: " << a() << " Размер b: " << b() << " Размер c: " << c() << '\n';
	cout << a << '\n';
	cin >> a;
	cout << a;
	a[0] = 20;
	cout << '\n';
	cout << a << '\n';
	cout << "a[0] = " << *(a.first()) << endl;
	Iterator i = a.first();
	++i;
	cout << "Второй элемент множества a по перемещению с помощью итератора = " << *i << endl;
	for (i = a.first(); i != a.last(); ++i) cout << *i << " ";
	b = a + 1;
	cout << '\n' << b << '\n';
	c = c + 1;
	cout << "Перемножение множеств:" << '\n' << b * c;
	return 0;
}