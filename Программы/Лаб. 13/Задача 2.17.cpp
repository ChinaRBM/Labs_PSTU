#include <iostream>
using namespace std;
int main()
{
    float s = 0;
    float x;
    float n;
    float z = 1;
    cin >> n;
    cin >> x;
    for (int i = 1; i <= n; i++)
    {
        z = z * i;
        if (i != 1)
        {
            x *= x;
        }
        s += (x / z);
    }
    cout << s + 1;
}