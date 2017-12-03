// Task_A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>


int main()
{
	int xr, yr, xk, yk;
	std::cout << "Enter coordinates of the round center";
	std::cin >> xr >> yr;
	std::cout << "Enter coordinates of the dot";
	std::cin >> xk >> yk;
	int radius = std::sqrt(pow((xk - xr), 2) + pow((yk - yr), 2));
	int len = 2 * 3.14 * radius;
	int S = 3.14 * radius * radius;
	std::cout << "Length=" << len << "S=" << S;
	return 0;
}