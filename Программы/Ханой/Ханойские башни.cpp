#include <iostream>
using namespace std;

void tower(int n, int first, int second, int third)
{
    if (n > 0)
    {
        tower(n - 1, first, third, second);
        cout << first << " => " << second << endl;
        tower(n - 1, third, second, first);
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введите количество дисков: ";
    cin >> n;
    tower(n, 1, 3, 2);
    return 0;
}