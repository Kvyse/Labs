// begin35.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int u, v, t1, t2;
	std::cout << "Enter speed of the boat and river:";
	std::cin >> v >> u;
	std::cout << "Enter the time in lake and river:";
	std::cin >> t1 >> t2;

	if (v > u && t1 >= 0 && t2 >= 0) {
		double s = t1*v + t2*(v + u);
		return 0;
	}
	else {
		std::cout << "Error";
		return 0;
	}
}