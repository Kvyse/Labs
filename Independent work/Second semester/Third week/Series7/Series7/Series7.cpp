// Series7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	int size, x;
	int sum = 0;
	ifstream r_file;
	r_file.open("in.txt");
	r_file >> size;

	double *array = new double[size];

	for (int i = 0; i < size; i++) {
		r_file >> array[i];
		x = array[i];
		sum += x;
		cout << x << " ";
	}

	cout << "\nSum = " << sum;

	cin.get();

	delete[] array;

    return 0;
}

