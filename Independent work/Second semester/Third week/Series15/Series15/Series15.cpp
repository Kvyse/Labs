// Series15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	int k,x,c = 0;
	ifstream r_file;
	r_file.open("in.txt");
	r_file >> k;

	do {
		r_file >> x;
		if (x > k) {
			c = x;
			break;
		}
	} 
	while (!r_file.eof());


	r_file.close();

	cout << c;
	cin.get();

    return 0;
}

