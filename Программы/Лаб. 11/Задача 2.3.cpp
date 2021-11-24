#include <iostream>
using namespace std;
int main()
{
	int n,t,s;
	t = 1;
	s = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		t = 1;
		for (int j = i; j <= i * 2; j++)
		{
			t = t * j;
		}
		s += t;
	}
	cout << s << endl;
}