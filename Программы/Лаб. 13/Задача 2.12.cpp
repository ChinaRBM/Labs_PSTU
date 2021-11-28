#include <iostream>
using namespace std;
int main()
{
	int n, k, min, max;
	cin >> n;
	cin >> k;
	max = min = k;
	for (int i = 0; i < n-1; i++)
	{
		cin >> k;
		if (k > max)
		{
			max = k;
		}
		if (k < min)
		{
			min = k;
		}
	}
	cout << (min + max);
	return 0;
}