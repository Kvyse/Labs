// while8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int n;
	double k = 1;
	std::cout << "Input n:";
	std::cin >> n;
	while (k*k < n) {
		k += 0.1;
	}
	std::cout << "K=" << k;
    return 0;
}

