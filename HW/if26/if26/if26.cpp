// if26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	double x;
	std::cout << "Input x";
	std::cin >> x;
	if (x <= 0) {
		x = -x;
		return 0;
	}
	else if (x > 0 && x < 2) {
		x = x*x;
		return 0;
	}
	else if (x > 2) {
		x = 4;
		return 0;
	}
	else {
		std::cout << "Error";
	}
    return 0;
}