// begin3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int a, b;
	std::cout << "Enter a and b value";
	std::cin >> a >> b;
	if (a&&b > 0) {
		int S = a*b;
		int P = 2 * (a*b);
		std::cout << "S=" << S << "P=" << P;
		return 0;
	}
	else {
		std::cout << "Error: a and b must be positive";
		return 0;
	}
}