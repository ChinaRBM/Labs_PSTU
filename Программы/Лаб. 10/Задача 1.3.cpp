#include <iostream>
using namespace std;
int main()
{
	float a, i;
	cin >> a;
	if (a < 5)
	{
		i = a * 3;
	}
	else if((a>=5)and(a<=7))
	{
		i = a / 10;
	}
	else
	{
		i = a + 3;
	}
	cout << i;
}
