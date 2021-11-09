#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	if (b != 0)
	{
		a = a / b;
		cout << a;
	}
	else
	{
		cout << "Delitel = 0";
	}
}
