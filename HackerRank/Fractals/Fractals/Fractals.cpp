// Fractals.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	do {
		cout << "Input number of fractal trees:";
		cin >> n;
		if(n < 1 || n > 5) {
			cout << "\nYou've input an invalid number!\nInput number from 1 to 5!\n\n";
		}
	} while (n < 1 || n > 5);
	system("CLS");

	int x = 1, y = 1;
	int trig = 0;//1-32 2-16 3-8 4-2 5-1
	int coord = n;
	n--;

	while (n >= 0) {
		trig = trig + pow(2,(5-n));
		n--;
	}
			  // 31 15 7 3 1
	coord; //50 (34 66( 26 42 58 74( 22 30 38 46 54 62 70 78(20 24 28 32 

	while (x < 64) {
		while (y < 101) {
			cout << "_";
			y++;
		}
		y = 1;
		cout << "\n";
		x++;
	}

	cin.get();
	cin.get();
    return 0;
}

