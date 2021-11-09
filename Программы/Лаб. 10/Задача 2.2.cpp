#include <iostream>
using namespace std;
int main()
{
	int n,i,o;
	cin >> n;
	o = 1;
	for (int i = 1; i <= n; i ++)
	{
		o = o * i;
	}
	cout << o;
}
