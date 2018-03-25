// Task_F2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#define r 10
#define q 10

int main()
{
	std::srand(std::time(NULL));
	int array[r][q];

	for (int i = 0; i < r; i++) {
		int even = 0;
		for (int j = 0; j < q; j++) {
			array[i][j] = std::rand() % 10;
			std::cout << std::setw(3) << array[i][j];
			if (array[i][j] == 0);
			else if (array[i][j] % 2 == 0) {
				even++;
			}
		}
		std::cout << "  The number of even numbers is:" << even << "\n";
	}

	std::cout << "\nThe numbers of odd numbers are:\n";

	for (int i = 0; i < r; i++) {
		int odd = 0;
		for (int j = 0; j < q; j++) {
			if (array[j][i] == 0) {
			}
			else if (array[j][i] % 2 == 0) {
				odd++;
			}
		}
		std::cout << std::setw(3) << odd;
	}


	std::cin.get();
    return 0;
}

