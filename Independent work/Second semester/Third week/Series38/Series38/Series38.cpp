// Series38.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int k, x, event_num = 0, real_num = 0;
	int prev_x = 0;
	ifstream r_file;
	r_file.open("in.txt");
	r_file >> k;
	r_file >> x;
	for (int i = 0; i < k; i++) {

		while(x != 0){
			if (x > prev_x) {
				event_num++;
			}
			else if (x < prev_x) {
				event_num--;
			}
			prev_x = x;
			real_num++;
			r_file >> x;
		}

		if (event_num == real_num) {
			cout << "The result of " << i + 1 << " line is: 1\n";
		}
		else if (event_num*(-1) == real_num) {
			cout << "The result of " << i + 1 << " line is: -1\n";
		}
		else {
			cout << "The result of " << i + 1 << " line is: 0\n";
		}
		event_num = 0;
		real_num = 0;
		prev_x = 0;
		r_file >> x;
	}

	cin.get();

    return 0;
}

