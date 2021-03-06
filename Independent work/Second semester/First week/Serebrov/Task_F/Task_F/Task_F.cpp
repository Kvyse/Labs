// Task_F.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

bool isFibSeries(int array[]);
void printOrNot(int array[]);

int main()
{
	int FibSer[] = { 1, 1, 2, 3, 5, 8, 13, 21, 34 };
	int NotFibSer[] = { 1, 1, 2, 3, 10, 5, 12, 7, 34 };
	int AlsoNotFibSer[] = { 2, 5, 6, 7, 5, 8, 13, 21, 34 };
	printOrNot(FibSer);
	printOrNot(NotFibSer);
	printOrNot(AlsoNotFibSer);
	std::cin.get();
    return 0;
}

void printOrNot(int array[]) {
	int n = 0;
	if (isFibSeries(array)) {
		while (n < 8) {
			std::cout << array[n] << "\t";
			n--;
		}
		std::cout << "\n";
	}
	else {
		std::cout << "0\n";
	}

}

bool isFibSeries(int array[]) {
	int n = 8;
	while (array[n] == array[n - 1] + array[n - 2]) {
		if (array[n - 1] - array[n - 2] == 0) {
			return true;
		}
		n--;
	}
	return false;
}