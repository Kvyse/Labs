// Task_D.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int a, b, c;
	std::cout << "Enter A and B values:";
	std::cin >> a >> b;
	c = a;
	a = a + b;
	b = b * c;
	return 0;
}