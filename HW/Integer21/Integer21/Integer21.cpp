// Integer21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

main() {
	int n;
	std::cout << "How many seconds have already gone?";
	std::cin >> n;
	n = n % 60;
	return n;
}