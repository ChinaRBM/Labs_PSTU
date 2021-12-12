#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float n,z,a;
	a = 0;
	cin >> n >> z;
	for (int i = 1; i <= n; i++)
	{
		if (z == (round(sin(n + (i / n)) * 10)/10))
		{
			a += 1;
			cout << "Yes, this element here is. Num of element is: " << a << endl;
		}
		cout << (round(sin(n + (i / n)) * 10) / 10) << endl;
		
	}
}