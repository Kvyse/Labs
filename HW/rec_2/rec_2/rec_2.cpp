// rec_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	double y = 1.0/3, x1 = 4.0, x2 = 3;
	int n, z = -1;
	std::cout << "Input n:";
	std::cin >> n;
	n = n - 1;
	while (n > 0) {
		y += x1 / x2;
		if (z == -1) {
			x1 += 2;
		}
		else {
			x2 += 2;
		}
		z *= -1;
		n--;
	}
	std::cout << "y=" << y;
    return 0;
}

