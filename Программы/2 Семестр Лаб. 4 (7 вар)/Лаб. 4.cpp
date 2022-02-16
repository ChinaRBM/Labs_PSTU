#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int const n = 10;
	int arr[n];
	int index;
	cout << "Type in index" << endl;
	cin >> index;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << ' ';
	}
	cout << endl;

	for (int j = n-1; j >=0; j--)
	{
		if ((arr[j] == 0) && (count == 0))
		{
			for (int k = j; k < n; k++)
			{
				if (k == n - 1) { arr[k] = 0; }
				else{ arr[k] = arr[k + 1]; }
			}
			count++;
		}
	}

	for (int j = n - 1; j > index; j--)
	{
		if (j == index + 1) { arr[j] = 100; }
		else { arr[j] = arr[j - 1]; }

	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}