#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int n;
	double k, j;
	cin >> n;
	j = n;
	stack <double> r;
	for (int i = 0; i < n; i++)
	{
		k = rand() % 200 - 100;
		if (k < 0)
		{
			r.push(0);
			r.push(k);
			j++;
		}
		else
		{
			r.push(k);
		}
	}
	for (int i = 0; i < j; i++)
	{
		cout << r.top() << " ";
		r.pop();
	}
}