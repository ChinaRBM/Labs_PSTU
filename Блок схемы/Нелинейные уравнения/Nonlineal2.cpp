#include <iostream>
#include <cmath>
using namespace std;
// Метод итераций
// f(x) = x^3 - x - 1
// f'(x) = 3x^2 - 1
// f''(x) = 6x;
// [1, 2]
// ф(x) = x + λ(x^3 - x - 1)
// -1/r < λ < 0, если f'(x) > 0
// 0 < λ < 1/r, если f'(x) < 0
// r = max(|f'(a)|, |f'(b)|)
// λ = -1/20 = -0.05
int main()
{
    float x, xPrev;
    double lambda = -0.05; // -1/20
    x = 2; // можно выбрать любое x0 из [1, 2] — выбранного заранее промежутка
    xPrev = 0; //делаем заведомо сильно меньше x, чтобы цикл правильно сработал
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = lambda * (pow(xPrev, 3) - xPrev - 1) + xPrev;
    }
    cout << "Корень по методу итераций: " << x << endl;
}
