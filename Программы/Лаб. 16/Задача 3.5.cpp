#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int i = 0;
	int count = 0;
	int max = -100000;
	for (i = 1; i <= 9; i++)
	{
		cin >> a[i];

		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] == max)
		{
			count++;
		}
	}
	cout << "Max: " << max << " Count: " << count;
}