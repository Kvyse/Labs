// Task_E.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int l, k;
	int array[] = { 1, 5, -2, 4, 10, 17, 22, 9, -3, 6, -12};
	std::cout << "Input L,K:";
	std::cin >> l >> k;
	std::cout << "\n";
	while (k >= l) {
		std::cout << array[k] << "\t";
		k--;
	}
	std::cin.get();
	std::cin.get();
    return 0;
}

