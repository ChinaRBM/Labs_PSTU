#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main()
{
    const int n = 6;
    int tmp, min_index;
    int arr[6] = { 6,3,9,1,5,7 };

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //Сортировка выборкой
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        tmp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}