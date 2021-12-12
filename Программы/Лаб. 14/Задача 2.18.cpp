#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin >> n;
	while (n != 0)
	{
		k = n % 10;
		n = n / 10;
		cout << k;
	}
}