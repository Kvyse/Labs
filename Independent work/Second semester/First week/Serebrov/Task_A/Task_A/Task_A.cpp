// Task_A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int k = 0;
	int array[] = { -1, 5, 8, -12, -4, 6, 8, 2, 5, -1, 3 };
	for (int i = 0; i < 11; i++) {
		if (array[i] > 0) {
			std::cout << array[i] << "\t";
			k++;
		}
	}
	std::cout << "\n K=" << k;
    return 0;
}

