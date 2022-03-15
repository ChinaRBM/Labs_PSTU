#include <iostream>

using namespace std;

int fill(int k,int *n)
{
    for (int i = 0; i < k; i++)
    {
        n[i] = rand() % 10 + 1;
    }
    return 0;
}

int print(int k, int* n)
{
    for (int i = 0; i < k; i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
    return 0;
}

int main()
{
    bool fl=false;
    int k, p;
    int count=0;
    cin >> k;
    int *n = new int[k];
    fill(k, n);
    cout << "Enter N: ";
    cin >> p;
    for (int i = 0; i < k; i++)
    {
        if (fl==false)
        {
            count++;
        }
        if ((n[i] == p) && (fl==false))
        {
            n[i] = p * 2;
            fl = true;
        }
    }

    if (fl == false)
    {
        cout << "There is no N";
    }
    else
    {
        print(k, n);
        cout << count;
    }
}
