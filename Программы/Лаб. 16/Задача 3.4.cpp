#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int i = 0;
	cin >> a[i];
	int max = a[i];
	for (i = 1; i <= 9; i++)
	{
		cin >> a[i];

		if (a[i] > max)
		{
			max = a[i];
		}
	}
	cout << "Max: " << max;
}