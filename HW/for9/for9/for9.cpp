// for9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int a, b, S = 0;
	std::cout << "Input a,b(b>a):";
    std::cin >> a >> b;
	for (S; a < b; a++) {
		S += a*a;
	}
	std::cout << "S=" << S;
    return 0;
}

