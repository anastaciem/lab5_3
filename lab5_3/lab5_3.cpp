// lab5_3.cpp
// < Демчук Анастасія >
// Лабораторна робота № 5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями //
// Варіант 14
#include <iostream>
#include <cmath>
using namespace std;
double t(const double x);
int main()
{
	double fp, fk, z;
	int n;
	cout << "fp = "; cin >> fp;
	cout << "fk = "; cin >> fk;
	cout << "n = "; cin >> n;
	double fg = (fk - fp) / n;
	double f = fp;
	while (f <= fk)
	{
		z = t(f * f) + 2 * t(2 * f + 1) + sqrt(t(1));
		cout << f << " " << z << endl;
		f += fg;
	}
	return 0;
}
double t(const double x)
{
	if (abs(x) >= 1)
		return ((cos(x) + 1) / (exp(x) + sin(x) * sin(x)));
	else
	{
		double S = 0;
		int j = 0;
		double a = x;
		S = a;
		do
		{
			j++;
			double R = -x * x / (2 * j * (2 * j + 1));
			a *= R;
			S += a;
		} while (j < 5);
		return S;
	}
}