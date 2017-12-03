// case16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

std::string print_num(int n) {
	int sec_n = n % 10;
	int fir_n = (n - sec_n) / 10;
	std::string n_str, n_str1, n_str2;

	if (fir_n == 2) {
		n_str1 = "Dvatsat";
	}

	else if (fir_n == 3) {
		n_str1 = "Tridsat";
	}

	else if (fir_n == 4) {
		n_str1 = "Sorok";
	}

	else if (fir_n == 5) {
		n_str1 = "Pyatdesyat";
	}

	else if (fir_n == 6) {
		n_str1 = "Shestdesyat";
	}

	if (sec_n == 0) {
		n_str2 = "";
	}

	if (sec_n == 1) {
		n_str2 = "odin";
	}

	if (sec_n == 2) {
		n_str2 = "dva";
	}

	if (sec_n == 3) {
		n_str2 = "tri";
	}

	if (sec_n == 4) {
		n_str2 = "chetire";
	}

	if (sec_n == 5) {
		n_str2 = "pyat";
	}

	if (sec_n == 6) {
		n_str2 = "shest";
	}

	if (sec_n == 7) {
		n_str2 = "sem";
	}

	if (sec_n == 8) {
		n_str2 = "vosem";
	}

	if (sec_n == 9) {
		n_str2 = "devyat";
	}
	n_str = n_str1 + " " + n_str2;
	return n_str;
}

int main()
{
	int x;
	std::cout << "Input years from 20 to 69:";
	std::cin >> x;
	if (x >= 20 && x <= 69) {
		int y = x % 10;
		switch (y) {
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			std::cout << print_num(x) << " let";
			break;
		case 2:
		case 3:
		case 4:
			std::cout << print_num(x) << " goda";
			break;
		case 1:
			std::cout << print_num(x) << " god";
			break;
		}
	}
	else {
		std::cout << "Error";
		return 0;
	}
}

