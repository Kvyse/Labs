// begin13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>

int main()
{
	double rad1, rad2;
	std::cout << "Enter radius values(first radius > second radius):";
	std::cin >> rad1 >> rad2;

	if (rad1 > 0 && rad2 > 0 && rad1 > rad2) {
		double s1 = 3.14 * rad1 * rad1;
		double s2 = 3.14 * rad2 * rad2;
		double s3 = s1 - s2;
		std::cout << "S1=" << s1 << "S2=" << s2 << "S3=" << s3;
	}
	else if (rad1 < rad2) {
		std::cout << "Error: First radius must be greater then second radius";
		return 0;
	}
	else if (rad1 < 0 || rad2 < 0) {
		std::cout << "Error: Values can't be negative";
		return 0;
	}
	else {
		std::cout << "Unknown error";
		return 0;
	}
}