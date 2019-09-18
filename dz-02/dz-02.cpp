#include <iostream>
#include <math.h>
#define PI 3.14159265

using namespace std;

void task1() {
	double h, R, r;
	cout << "Эта программа считает объем и площадь полной поверхности усеченного конуса.\n";
	cout << "Введите высоту конуса: ";
	cin >> h;
	cout << "Введите радиус нижнего основания конуса: ";
	cin >> R;
	cout << "Введите радиус верхнего основания конуса: ";
	cin >> r;
	if ((h <= 0) || (R <= 0) || (r <= 0)) {
		cout << "\nОШИБКА! Все параметры конуса должны быть положительными числами.";
		cout << "\n";
	} else {
		double l = sqrt(h * h + (R - r) * (R - r));
		double V = 1.0 / 3.0 * PI * h * (R * R + R * r + r * r);
		double S = PI * (R * R + (R + r) * l + r * r);
		cout << "\nОбъем конуса: " << V;
		cout << "\nПлощадь полной поверхности: " << S;
		cout << "\n";
	}
}

void task2() {
	double x, a;
	cout << "Введите x и а через пробел: ";
	cin >> x >> a;
	if (abs(x) < 1) {
		if (x != 0)
			cout << a * log(abs(x)) << "\n";
		else
			cout << "w = " << "\nОтвет не определён.\n";
	} else {
		if (x*x <= a)
			cout << "w = " << sqrt(a - x * x) << "\n";
		else
			cout << "\nОтвет не определён.\n";
	}
}

void task3() {
	double x, y, b, z;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Введите b: ";
	cin >> b;
	if ((b - y > 0) && (b - x >= 0)) {
		z = log(b - y) * sqrt(b - x);
		cout << "\nz = " << z << "\n";
	} else {
		cout << "\nОтвет не определен.\n";
	}
}

void task4() {
	long long int n;
	do {
		cout << "Введите натуральное число N: ";
		cin >> n;
		cout << "\n";
		if (n <= 0) {
			cout << "ОШИБКА! Введите НАТУРАЛЬНОЕ число\n";
		}
	} while (n <= 0);
	
	for (int i = n; i < n + 10; i++) {
		cout << i << " ";
	}
	cout << "\n";
}

double task5function(double x) {
	double y;
	y = (x * x - 2 * x + 2) / (x - 1);
	return y;
}
void task5() {
	cout << "\tX\t\tY\n";
	for (double x = -4; x <= 4; x+=0.5) {
		if (x == 1) {
			cout << "\t" << x << "\t\t" << "Не определен\n";
		} else {
			cout << "\t" << x << "\t\t" << task5function(x) << "\n";
		}
	}
	cout << "\n";
}

int main()
{
	setlocale(0, "");
	task5();
	return 0;
}


