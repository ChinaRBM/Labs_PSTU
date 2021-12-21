#include <iostream>
using namespace std;
int main()
{
	float n, max;
	int count = 0;
	cin >> n;
	max = -1;
	for (float i = 1; i <= n; i++)
	{
		cout << (round(sin(n + (i / n)) * 10) / 10) << endl;
		if ((round(sin(n + (i / n)) * 10) / 10) > max)
		{
			max = (round(sin(n + (i / n)) * 10) / 10);
		}
	}

	for (float i = 1; i <= n; i++)
	{
		if ((round(sin(n + (i / n)) * 10) / 10) == max)
		{
			count++;
		}
	}
	cout << "Max: " << max << endl;
	cout << "Numbers of equal to Max: " << count;
}