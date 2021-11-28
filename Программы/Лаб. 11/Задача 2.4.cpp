#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int spaces = n / 2;
	int stars = 1;
	for (int i = 1; i <= (n/2)+1; i++)
	{
		for (int j = 1; j <= spaces; j++)
		{
			cout << " ";
		}
		spaces--;
		for (int j = 1; j <= stars; j++)
		{
			cout << "*";
		}
		stars+=2;
		cout << endl;
	}
}