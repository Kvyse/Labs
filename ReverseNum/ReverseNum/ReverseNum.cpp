// ReverseNum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int x, n = 10, a = 0;
	std::cout << "Input x:";
	std::cin >> x;
	while (x > 0) {
		int x_n = x % 10;
		a = a * 10 + x_n;
		x = (x - x_n) / 10;
	}
	std::cout << "Reverse x:" << a;
    return 0;
}

