// case11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

char turn_left(char coord) {
	if (coord == 'S') {
		coord = 'E';
		return coord;
	}
	if (coord == 'E') {
		coord = 'N';
		return coord;
	}
	if (coord == 'N') {
		coord = 'W';
		return coord;
	}
	if (coord == 'W') {
		coord = 'S';
		return coord;
	}
}

char turn_right(char coord) {
	if (coord == 'S') {
		coord = 'W';
		return coord;
	}
	if (coord == 'W') {
		coord = 'N';
		return coord;
	}
	if (coord == 'N') {
		coord = 'E';
		return coord;
	}
	if (coord == 'E') {
		coord = 'S';
		return coord;
	}
}

int main()
{
	char cadi;
	int a_1, a_2, x = 0;
	std::cout << "Input original cardinal directon and two actions";
	std::cin >> cadi >> a_1 >> a_2;
	switch (cadi) {

	case 'S':
		x = a_1 + a_2;
		if (x > 0) {
			while (x > 0) {
				cadi = turn_left(cadi);
				x--;
			}
			return cadi;
		}
		else if (x < 0) {
			while (x < 0) {
				cadi = turn_right(cadi);
				x++;
			}
			return cadi;
		}
		else if (x = 0) {
			return cadi;
		}
		break;

	case 'W':
		x = a_1 + a_2;
		if (x > 0) {
			while (x > 0) {
				cadi = turn_left(cadi);
				x--;
			}
			return cadi;
		}
		else if (x < 0) {
			while (x < 0) {
				cadi = turn_right(cadi);
				x++;
			}
			return cadi;
		}
		else if (x = 0) {
			return cadi;
		}
		break;

	case 'N':
		x = a_1 + a_2;
		if (x > 0) {
			while (x > 0) {
				cadi = turn_left(cadi);
				x--;
			}
			return cadi;
		}
		else if (x < 0) {
			while (x < 0) {
				cadi = turn_right(cadi);
				x++;
			}
			return cadi;
		}
		else if (x = 0) {
			return cadi;
		}
		break;

	case 'E':
		x = a_1 + a_2;
		if (x > 0) {
			while (x > 0) {
				cadi = turn_left(cadi);
				x--;
			}
			return cadi;
		}
		else if (x < 0) {
			while (x < 0) {
				cadi = turn_right(cadi);
				x++;
			}
			return cadi;
		}
		else if (x = 0) {
			return cadi;
		}
		break;
	}
}

