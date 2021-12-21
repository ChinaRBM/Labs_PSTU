
#include <iostream>
using namespace std;
int main()
{
    int n, n1, n2;
    cin >> n;
    cout << n << ' ';
    n1 = n;
    while (n != 0)
    {
        cin >> n;
        cout << n << ' ';
        n2 = n;
        if (n2 < n1 && n2!=0)
        {
            cout << "Not sequentional";
            break;
        }
        n1 = n2;
    }
}
