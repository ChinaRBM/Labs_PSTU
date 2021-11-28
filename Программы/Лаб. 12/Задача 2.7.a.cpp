#include <iostream>
using namespace std;
int main() 
{
	float n;
	cin >> n;
	n = sqrt(n);
		for (int i = 0; i < n; i++) 
		{
			for (int i = 0; i < n; i++) 
			{
				cout << "* ";
			}
			cout << endl;
		}
}