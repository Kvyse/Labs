// while12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int n, k = 1, s = 0;
	std::cout << "Input N(N>1):";
	std::cin >> n;
	while (s + k < n) {
		s += k;
		k++;
	}
	std::cout << "Sum=" << s << "\t" << "K=" << k;
    return 0;
}

