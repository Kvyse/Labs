// while_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	double a, b;
	std::cout << "Input A,B(A>B):";
	std::cin >> a >> b;
	int n = 0;
	while (a >= b) {
		a = a - b;
		n++;
	}
	std::cout << "Number of B in A =" << n;
    return 0;
}

