// rec_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

int main()
{
	int x, n;
	std::cout << "Input x,n:";
	std::cin >> x >> n;
	double y = 0;
	while (n > 0) {
		y += sin(x);
		n--;
		x = sin(x);
	}
	std::cout << "y=" << y;
    return 0;
}
