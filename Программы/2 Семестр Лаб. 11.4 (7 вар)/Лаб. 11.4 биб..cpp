#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <int> r;
    bool fl=false;
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        k = rand() % 200 - 100;
        r.push(k);
        if ((k % 2 == 0) && (fl == false))
        {
            r.pop();
            fl = true;
        }
    }
    if (fl == true)
    {
        n--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << r.back()<<" ";
        r.pop();
    }
}
