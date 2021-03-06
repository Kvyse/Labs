// Array32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

int LocalMin(int array[]);

int main()
{
	int array[8];
	int n = 0;
	std::srand(std::time(NULL));
	while (n < 8) {
		array[n] = rand() % 10;
		n++;
	}
	for (int i = 0; i < 8; i++) {
		std::cout << array[i] << "\t";
	}
	std::cout << "\nFirst local Minimum is:" << LocalMin(array);
	std::cin.get();
	return 0;
}

int LocalMin(int array[]) {
	int n = 1;
	while (n < 7) {
		if (array[n] < array[n - 1] && array[n] < array[n + 1]) {
			return array[n];
		}
		n++;
	}
	return 0;
}
