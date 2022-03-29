#include<iostream>
#include<cmath>
using namespace std;
class func
{
public:
	double alpha;
	double beta;
	double y;
	void read()
	{
		cout << "Введите коэффициент A: ";
		cin >> alpha;
		cout << endl << "Введите коэффициент B: ";
		cin >> beta;
	}
	void function(double x)
	{
		y = alpha*x+beta;
	}
	void print()
	{
		cout << endl << "Значение функции: " << y << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");
	double x;
	func tg;
	cout << "Введите x: " << endl;
	cin >> x;
	tg.read();
	tg.function(x);
	tg.print();
}