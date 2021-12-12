#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int max = -100000;
	int min = 0;
	for (int i = 1; i <= 9; i++)
	{
		cin >> a[i];

		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
		
	}
	cout << "Max: " << max << " Min: " << min;
}