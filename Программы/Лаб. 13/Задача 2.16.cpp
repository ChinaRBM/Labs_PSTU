#include <iostream>
using namespace std;
int main()
{
	int n,k,sum;
	cin >> n;
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		k = i;
		if (i % 2 == 1)
		{
			k *= -1;
		}
		sum += k;
	}
	cout << sum;
}