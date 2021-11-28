#include <iostream>
using namespace std;
int main()
{
	int n,z,k;
	cin >> z;
	cin >> n;
	while (n > 0)
	{
		k = n % 10;
		if (k == z)
		{
			cout << "There it is";
		}
		n = n / 10;
	}
}