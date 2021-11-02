#include <iostream>
using namespace std;
int main()
{
	float f, c; // Объявление f и c, как чисел с плавающей точкой 
	cin >> f; // Ввод f
	c = 5.0f / 9.0f * (f - 32); // Перевод из фаренгейтов в цельсии
	cout << c; // Вывод c

}