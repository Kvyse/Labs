// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#define N 16

int main()
{
	int list[N] = {1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 1, 2, 1, 2, 1, 0};
	int z = 0, sum = 0;
	for (int i = 1; i < N; i++) {
		if (list[i] > list [i - 1]) {
			z++;
		}
		else if (list[i] < list[i - 1] && z > 1) {
			sum++;
			z = 0;
		}
		else {
			z = 0;
		}
	}
	if (z > 1)sum++;
	std::cout << "The number of monotonically increasing areas is:" << sum;
	std::cin.get();
    return 0;
}

