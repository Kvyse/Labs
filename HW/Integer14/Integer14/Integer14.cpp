// Integer14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int a, numb;
	std::cout << "Enter a three-digit number:";
	std::cin >> numb;
	a = numb % 10;
	numb = numb - a;
	numb = numb / 10;
	a = a * 100;
	numb = numb + a;
	std::cout << numb;

	return 0;
}