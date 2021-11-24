#include <iostream>
using namespace std;
int main()
{
	int n,t,i;
	bool f = false;
	i = 1;
	cin >> n;
	while (i <= n && !f)
	{
		cin >> t;
		if (t == 0) { i++; }
		else
		{ 
			f = true;
		}
	}
	if ((t > 0) && (f = true))
	{
		cout << "+" << endl;
	}
	else
	{
		cout << "-" << endl;
	}
}