// If10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int a, b;
	std::cout << "Enter a and b value:";
	std::cin >> a >> b;

	if (a != b) {
		a = a + b;
		b = a;
		std::cout << "A=" << a << "B=" << b;
		return 0;
	}
	else {
		a = 0;
		b = 0;
		return 0;
	}
}

