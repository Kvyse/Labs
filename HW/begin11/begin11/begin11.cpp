// begin11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>


int main()
{
	int a, b;
	std::cout << "Enter a and b value(a,b!=0)";
	std::cin >> a >> b;

	if (a != 0 & b != 0) {
		int Sum = a + b;
		int Dif = a - b;
		int Mult = a * b;
		double Mod = std::fabs(a / b);
		return 0;
	}
	else {
		std::cout << "Error";
		return 0;
	}
}