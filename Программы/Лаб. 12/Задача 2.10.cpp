#include <iostream>
using namespace std;
int main() 
{
	int n, k;
	int max = 0;
	cin >> n;
	for (int i=0; i < n;i++)
	{
		cin >> k;
		if (k > max)
		{
			max = k;
		}
	}
	cout << max;
}