// Array3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int a, d;
	std::cout << "Input:A,D\n";
	std::cin >> a >> d;
	int array[10];
	for (int i = 0; i < 10; i++) {
		array[i] = a + i*d;
		std::cout << array[i] << "  ";
	}
	return 0;
}

