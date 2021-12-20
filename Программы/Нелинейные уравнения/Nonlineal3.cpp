#include <iostream>
#include <cmath>
using namespace std;
// Метод Ньютона
// f(x) = x^3 - x - 1
// f'(x) = 3x^2 - 1
// f''(x) = 6x;
// [1, 2]
// f(b) * f''(b) > 0
// 8 - 2 - 1 * 6*2 > 0 => x0 = b;
int main()
{
    float x, xPrev;
    x = 2;
    xPrev = 0;
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = xPrev - ((pow(xPrev, 3) - xPrev - 1) / (3 * pow(xPrev, 2) - 1));
    }
    cout << "Корень: " << x << endl;
}