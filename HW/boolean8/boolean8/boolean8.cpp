// boolean8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	int a, b;
	std::cout << "Enter a and b value:";
	std::cin >> a >> b;
	bool is_a_odd = (a % 2 == 1);
	bool is_b_odd = (b % 2 == 1);
	bool is_a_and_b_odd = is_a_odd && is_b_odd;
	if ( is_a_and_b_odd == true) {
		std::cout << "True";
		return 0;
	}
	else {
		std::cout << "False";
		return 0;
	}
}