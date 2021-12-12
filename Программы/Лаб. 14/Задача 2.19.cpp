#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum = 0;
	int j = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i == pow(3, j))
		{
			sum -= i;
			j += 1;
		}
		else
		{
			sum += i;
		}
		
	}
	cout << sum;
}