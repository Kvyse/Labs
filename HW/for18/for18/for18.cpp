// for18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	double A, S = 0, a = 1;
	int N, n = 1;

	std::cout << "Input A,N:";
	std::cin >> A >> N;
	A = A * (-1);
	for (S; n <= N; n++) {
		S += A*a;
		a *= -1*A;
	}
	std::cout << "S=" << S;
    return 0;
}

