// Task_F1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#define k 3
#define t 3

int main()
{
	int sum = 1;
	int array[k][t];
	std::srand(std::time(NULL));
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < t; j++) {
			array[i][j] = std::rand() % 10;
			std::cout << std::setw(3) << array[i][j];
			if ((i + j) % 3 == 0) {
				if (array[i][j] == 0) {
				}
				else {
					sum *= array[i][j];
				}
			}
		}
		std::cout << "\n";
	}
	std::cout << "\n\nSum is " << sum;
	std::cin.get();
	return 0;
}

