// Matrix6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

#define m 5
#define n 5

int main()
{
	int d;
	int array[m][n];
	std::cout << "Input d:";
	std::cin >> d;
	std::cout << "\nInput first string of the matrix:\n";

	for (int i = 0; i < n; i++) {
		std::cin >> array[0][i];
	}
	std::cout << "\n\n";

	for (int i = 1; i < m; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] = array[i - 1 ][j]*d;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			std::cout <<std::setw(5) << array[i][j] ;
		}
		std::cout << "\n";
	}
	
	std::cin.get();
	std::cin.get();

    return 0;
}

