// Integer26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int day;
	std::cout << "Enter the number of the day(1-365)";
	std::cin >> day;
	int ind = day % 7 + 5;

	return 0;
}