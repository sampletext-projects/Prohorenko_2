#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>

using namespace std;

double V(double r, double h)
{
	//pi * r^2 * h
	return M_PI * r * r * h;
}

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала Прохоренко Полина Андреевна студент группы УТН-111\n";
	cout << "Программа для расчёта объёмов цилиндров\n";

	for (double h = 12; h <= 15; h++)
	{
		for (double r = 5; r <= 20; r += 5)
		{
			double v = V(r, h);
			cout << "H: " << setw(2) << h <<
				" см, R: " << setw(2) << r <<
				" см, V: " << setw(6) << setprecision(5) << v <<
				" см^3\n";
		}
	}

	system("pause");

	return 0;
}
