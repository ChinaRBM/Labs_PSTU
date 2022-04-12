#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n = 0;
    cout << "Введите количество элементов массива: ";
    cin >> n;
    int* mas = new int[n];
    for (int i = 0; i < n; i++)
    {
        mas[i] = rand() % 100;
        cout << mas[i] << " ";
    }
    cout << endl;


    int tmp = 0;
    int d = n / 2;
    while (d > 0)
    {
        for (int i = 0; i < n - d; i++)
        {
            int j = i;
            while (j >= 0 && mas[j] > mas[j + d])
            {
                tmp = mas[j];
                mas[j] = mas[j + d];
                mas[j + d] = tmp;
                j--;
            }
        }
        d = d / 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << " ";
    }
    return 0;
}