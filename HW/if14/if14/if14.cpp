// if14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int a, b, c;
	std::cout << "Enter a, b and c value:";
	std::cin >> a >> b >> c;
	if (a > b && a > c) {
		if (b > c) {
			std::cout << a << b << c;
			return 0;
		}
		else if (c > b) {
			std::cout << a << c << b;
			return 0;
		}
		else {
			std::cout << "Error";
			return 0;
		}
	}
	else if (b > a && b > c) {
		if (a > c) {
			std::cout << b << a << c;
			return 0;
		}
		else if (c > a) {
			std::cout << b << c << a;
			return 0;
		}
		else {
			std::cout << "Error";
			return 0;
		}
	}
	else if (c > a && c > b) {
		if (a > b){
			std::cout << c << a << b;
			return 0;
		}
		else if (b > a) {
			std::cout << c << b << a;
			return 0;
		}
		else {
			std::cout << "Error";
			return 0;
		}
	}
	else {
		std::cout << "Error";
		return 0;
	}
}

