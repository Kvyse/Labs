// for12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int N;
	double S = 1.0;
	std::cout << "Input N:";
	std::cin >> N;
	double a = 1.1;
	for (S; N > 0; N--) {
		S *= a;
		a += 0.1;
	}
	std::cout << "S=" << S;
    return 0;
}

