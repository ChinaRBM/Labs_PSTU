#include <iostream>
using namespace std;
int main()
{	
	float a, b, c, d, x1, x2;
	cin >> a >> b >> c;
	d = pow(b, 2) - 4 * a * c;
	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (a * 2);
		x2 = (-b - sqrt(d)) / (a * 2);
		cout << "Two roots" << x1 << " " << x2;
	}
	if (d == 0)
	{
		x1 = -b / (a * 2);
		cout << "One root" << x1;
	}
	if (d < 0)
	{
		cout << "No roots";
	}
}