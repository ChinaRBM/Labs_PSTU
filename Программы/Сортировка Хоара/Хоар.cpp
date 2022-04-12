#include <iostream>

using namespace std;

void HSort(int* a, int n)
{
	int i = 0;
	int j = n - 1;
	int mid = a[n / 2];
	do
	{
		while (a[i] < mid)
		{
			i++;
		}
		while (a[j] > mid)
		{
			j--;
		}
		if (i <= j)
		{
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
			i++;
			j--;
		}
	} while (i <= j);
	if (j > 0)
	{
		HSort(a, j + 1);
	}
	if (i < n)
	{
		HSort(&a[i], n - i);
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	int n = 0;
	cout << "Введите количество элементов в массиве: ";
	cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 100;
		cout << mas[i] << " ";
	}
	cout << endl;
	HSort(mas, n);
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	return 0;
}
