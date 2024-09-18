#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


double f(double x) {
	return x * x * x;
}

double oblicz_calke(double a, double b) {
	double dx = 0.01;
	int n = (b - a) / dx;  // a, b - granice calkowania
	double calka = 0;
	for (int i = 0; i < n; i++) {
		double pole_trapezika = abs((f(a + i * dx) + f(a + (i + 1) * dx)) * dx / 2);
		calka += pole_trapezika;
	}
	return calka;
}
int main() {
	double c = oblicz_calke(-10, 15);
	cout << fixed << setprecision(2) << c;
}