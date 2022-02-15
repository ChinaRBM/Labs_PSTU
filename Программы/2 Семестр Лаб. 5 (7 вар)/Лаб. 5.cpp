
#include <iostream>

using namespace std;
int main()
{
	int const n = 3;
	int const m = 3;
	int tmp;
	int arr[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 50;
			cout << arr[i][j]<<' ';
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][0] == arr[0][j])
			{
				for (int k = 0; k < m; k++)
				{
					tmp = arr[k][j];
					arr[k][j] = arr[i][k];
					arr[i][k] = tmp;
				}
			}
		}
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}