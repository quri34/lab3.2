// Lab_03_2.cpp
// < Бихнюка Сергія >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	
		cout << "x = "; cin >> x;
		if (x + 5 < 0 && c == 0)
			F = (1 / a * x) - b;
		if (x + 5 > 0 && c != 0)
			F = (x - a) / b;
		if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
			F = (10 * x) / (c - 4);
		cout << "2) F = " << F << endl;
		cin.get();
		return 0;
}

