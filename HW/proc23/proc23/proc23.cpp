// proc23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int quarter(double x, double y) {
	if (x > 0 && y > 0) {
		return 1;
	}
	else if (x < 0 && y > 0) {
		return 2;
	}
	else if (x < 0 && y < 0) {
		return 3;
	}
	else {
		return 4;
	}
}

int main()
{
	double x_1, x_2, x_3, y_1, y_2, y_3;
	std::cout << "Input coordinates of 3 dots(x;y):";
	std::cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_3 >> y_3;
	std::cout << "First dot in the " << quarter(x_1, y_1) << " quarter" << "\n";
	std::cout << "Second dot in the " << quarter(x_2, y_2) << " quarter" << "\n";
	std::cout << "Third dot in the " << quarter(x_3, y_3) << " quarter" << "\n";
    return 0;
}

