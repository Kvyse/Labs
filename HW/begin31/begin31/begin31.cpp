// begin31.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int tempf;
	std::cout << "Enter tempreture:";
	std::cin >> tempf;
	double tempc = (tempf - 32)*(5 / 9);
	return 0;
}