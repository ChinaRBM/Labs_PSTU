#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	int SIZE = 6;
	const int n = 10000;

	int a[6][6] = {{0,4,0,0,8,0},{4,0,15,9,23,0},{0,15,0,0,12,6},{0,9,0,0,0,11},{8,23,12,0,0,0},{0,0,6,11,0,0}
	};

	int min_d[6];
	int count[6];
	int temp, minindex, min;
	int begin_index = 0;

	cout << endl << "Матрица связей: " << endl << endl;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (a[i][j] > 9)
			{
				cout << " " << a[i][j];
			}
			else { cout << " " << a[i][j] << " "; }
		}
		cout << endl;
	}
	for (int i = 0; i < SIZE; i++)
	{
		min_d[i] = n;
		count[i] = 1;
	}
	min_d[begin_index] = 0;

	do {
		minindex = n;
		min = n;
		for (int i = 0; i < SIZE; i++)
		{
			if ((count[i] == 1) && (min_d[i] < min))
			{
				min = min_d[i];
				minindex = i;
			}
		}

		if (minindex != n)
		{
			for (int i = 0; i < SIZE; i++)
			{
				if (a[minindex][i] > 0)
				{
					temp = min + a[minindex][i];
					if (temp < min_d[i])
					{
						min_d[i] = temp;
					}
				}
			}
			count[minindex] = 0;
		}
	} while (minindex < n);

	cout << endl << "Кратчайшие расстояния до вершин: " << endl << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "До " << (i + 1) << " вершины: ";
		cout << " " << min_d[i] << endl << endl;
	}
	return 0;
}