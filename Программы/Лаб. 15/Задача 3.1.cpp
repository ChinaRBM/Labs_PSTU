#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main()
{
    int n = 6;
    int arr[6] = {6,3,9,1,5,7};
    int j, tmp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Сортировка вставками
    for (int i = 0; i < n; i++)
    {
        tmp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
        {
            arr[j + 1] = arr[j];
            arr[j] = -1;
        }
        arr[j + 1] = tmp;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";// Вывод после каждого шага
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}