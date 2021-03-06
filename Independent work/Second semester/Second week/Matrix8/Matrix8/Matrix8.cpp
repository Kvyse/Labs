// Matrix8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include<iomanip>

#define m 10
#define n 10

int main()
{
	int k;
	int array[m][n];
	std::srand(std::time(NULL));
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] = rand() % 10;
			std::cout <<std::setw(3) << array[i][j];
		}
		std::cout << "\n";
	}

	std::cout << "\n\nInput k(1-10):";
	std::cin >> k;
	k--;
	for (int i = 0; i < m; i++) {
		std::cout << "\n" << array[i][k];
	}
	std::cin.get();
	std::cin.get();
    return 0;
}

