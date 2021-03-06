// Laboratory_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

double iter_func(double x);
double rec_func(double a, int b, double x);
double rec_call(double x);
void full_table(double x1, double xn, int n);
void table(double x1, double xn, int n, double (*func)(double x));

int main()
{
	double x1, xn;
	int n;
	std::cout << "Input a,b,n:";
	std::cin >> x1 >> xn >> n;
	table(x1, xn, n, iter_func);
	table(x1, xn, n, std::log);
	table(x1, xn, n, rec_call);
	full_table(x1, xn, n);
    return 0;
}

double iter_func(double x) {
	double a = 1;
	int b = 1;
	double S = 0;
	while (std::fabs(a / b) > 0.0001) {
		S = S + (a*(x - 1)) / (b*x);
		a = (a*(x - 1)) / x;
		b = b + 1;
	}
	return S;
}

double rec_func(double a, int b, double x) {
	if (std::fabs(a / b) < 0.0001) {
		return 0;
	}
	else {
		return (a*(x - 1)) / (b*x) + rec_func((a*(x - 1)) / x, b + 1, x);
	}
}

void full_table(double x1, double xn, int n) {
	double dx = (xn - x1) / n;
	double x = x1;
	for (int i = 0; i < n + 1; i++) {
		std::cout << x << "\t" << iter_func(x) << "\t" << std::log(x) << "\t" << rec_call(x) << "\n";
		x = x + dx;
	}
}

double rec_call(double x) {
	return rec_func(1, 1, x);
}

void table(double x1, double xn, int n, double (*func)(double x)) {
	double dx = (xn - x1) / n;
	double x = x1;
	for (int i = 0; i < n + 1; i++) {
		std::cout << x << "\t" << func(x) << "\n";
		x = x + dx;
	}
	std::cout << "\n";
}
