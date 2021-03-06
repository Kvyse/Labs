// Laboratory_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>

int main()
{
	double a, b, N = 10;
	std::ofstream out_file("outSerebrov.txt");
	std::ifstream in_file("inSerebrov.txt");

	while (in_file >> a >> b)
	{
		N = 10;
		double true_sum = b*b*b / 3 - a*a*a / 3;
		out_file << "a=" << a << "\t" << "b=" << b << "\n";
		out_file << "True Value=" << true_sum << "\n";
		while (N <= 100)
		{
			double sum = 0;
			double x = (b - a) / N;
			double coord = a;
			while (coord < b)
			{
				double center = coord + x / 2;
				double s = x * center * center;
				sum = sum + s;
				coord = coord + x;
			}
			std::cout << N << "\t" << sum << "\t" << true_sum - sum << "\n";
			out_file << N << "\t" << sum << "\t" << true_sum - sum << "\n";
			N = N + 10;
		}
		out_file << "\n";
	}
	out_file.close();
	return 0;
}

