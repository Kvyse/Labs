// Series32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	int **array;
	int k, n;
	ifstream r_file;
	r_file.open("in.txt");

	r_file >> k;
	r_file >> n;

	array = new int*[k];

	for (int i = 0; i < k; i++) {
		array[i] = new int[n];
	}

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			r_file >> array[i][j];
		}
	}

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			if (array[i][j] == 2) {
				cout << j+1 << "\n";
				break;
			}
			else if (j + 1 == n) {
				cout << "0\n";
			}
		}
	}

	for (int i = 0; i < k; i++)
		delete[] array[i];

	delete[] array;


	cin.get();
    return 0;
}

