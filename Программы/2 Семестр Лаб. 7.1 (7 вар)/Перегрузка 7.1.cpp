#include <iostream>
#include <complex>
using namespace std;
double delenie(int a, int b)
{
	cout << a / b << endl;
	return 0;
}
double delenie(complex<double> a, complex<double> b)
{
	cout << a / b << endl;
	return 0;
}
int main()
{
	double m1 = delenie(23, 8);
	double m2 = delenie((16, 2), (5, 2));
}