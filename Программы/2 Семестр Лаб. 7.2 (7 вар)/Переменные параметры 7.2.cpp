#include <iostream>
using namespace std;

int min(int k, int first, ...)
{
    int* p = &first;
    int minimal = 33000;
    for (int i=0; i < k; i++)
    {
        if (minimal > *p)
        {
            minimal = *p;
        }
        p++;
    }
    return minimal;
}

int main()
{
    cout << min( 5,98, 20, 10, 35, 60) << endl << min(10, 2, 8, -1, 20, -8, -3, 43, 1, 90, -90) << endl << min(12, -2, 8, 67, 20, 8, -3, 23, 13, 9, -90, -54, 32);
}