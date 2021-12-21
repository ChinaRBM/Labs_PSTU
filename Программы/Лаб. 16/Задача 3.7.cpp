#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    bool flag = true;
    int a[6];
    
    for (int i = 0; i < n; i++)
    {
        cin >>
            a[i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] < a[i - 1])
        {
        flag = false;
        }
    }
    if (flag)
    {
    cout << "Sequentional" << endl;
    }
    else
    {
    cout << "Not sequentional" << endl;
    }
}