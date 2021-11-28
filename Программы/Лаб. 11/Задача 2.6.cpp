#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n > 2) {
		for (int i = 0; i <= n; i++) 
		{
			for (int j = 0; j < i; j++) 
			{
				cout << "  ";
			}
			for (int j = i; j <= n-1; j++) 
			{
				cout << "* ";
			}
			cout << endl;
		}
	}
	else 
	{
		cout << "N <= 2";
	}
}