// proc26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

int isPower5(int x) {
	if (x % 5 == 0) {
		int n = 1;
		while (x/5 >= 5) {
			x = x / 5;
			n++;
		}
		if (x == 5) {
			return n;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

int main()
{
	int x;
	std::cout << "Input k:";
	std::cin >> x;
	std::cout << "Is k power of 5(0=no): " << isPower5(x);
    return 0;
}

