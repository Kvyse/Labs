// Lab_string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cctype>
#include <cstdio>
#include <iostream>

using namespace std;
#pragma warning(disable:4996)

/*void task1_C_del_int(char str[]);
void task2_C_add_til(char str[]);
void task4_C_copy_a(char str[]);
void task3_C_copy_S_to_X(char strS[], char strX[]);
*/
void task1_C_del_int(char str[]);

int main()
{
	char strS[100] = "unint rabbit, uncommon integral";
	char strX[40] = "h3z some info,lul";

	char str[40] = "Lol are you jam";
	task1_C_del_int(strS);

	//task1_C_del_int(strS);
	//task2_C_add_til(strS);
	//task3_C_copy_S_to_X(strS, strX);
	//task4_C_copy_a(strS);

	//cout << strX << endl << strS << endl;
	cin.get();

    return 0;
}

void task1_C_del_int(char str) {
	char p;
	char trig[] = "int";
	p =strstr(str,trig);
	if (p) {
		strcpy(p, p + strlen(trig));
		printf("\n%s\n", str);
	}
	else printf("\nNo such substring!!!\n");
	cout << str;
}

/*void task1_C_del_int(char str[]) {
	int i = 0, j = 0, z = 1;
	while (str[j]) {

		if (str[i] == 'i' && str[i + 1] == 'n' && str[i + 2] == 't' &&z) {
			j += 3;

			for (int n = 3; n > 0; n--) {
				str[i] = str[j];
				i++;
				j++;
			}
			z--;
		}

		else {
			str[i] = str[j];
			i++;
			j++;
		}
		int k = strlen(str);
		if (j == strlen(str)) {
			str[j - 3] = '\0';
		}
	}
	return;
}


void task2_C_add_til(char str[]) {
	int i = 0, z = 1;
	while (str[i]) {

		if (str[i] == 'u' && str[i + 1] == 'n' &&z) {

			int n = strlen(str) + 3;
			while (n != i + 4) {
				str[n] = str[n - 3];
				n--;
			}

			str[i + 2] = 't';
			str[i + 3] = 'i';
			str[i + 4] = 'l';
			str[strlen(str) + 1] = '\0';
			z--;
		}
		i++;
	}
	return;
}

void task4_C_copy_a(char str[]) {
	int i = 0;
	while (str[i]) {

		if (str[i] == 'a') {

			int n = strlen(str) + 1;
			while (n != i + 1) {
				str[n] = str[n - 1];
				n--;
			}
			str[i + 1] = 'a';
			i++;
		}
		i++;
	}
	str[strlen(str)] = '\0';
	return;
}

void task3_C_copy_S_to_X(char strS[], char strX[]) {
	int i = 0;
	while (strX[i]) {

		if (strX[i] == ',') {
			int n = strlen(strX);
			while (n != i + 3) {
				strX[n] = strX[n - 3];
				n--;
			}

			strX[i + 1] = strS[0];
			strX[i + 2] = strS[1];
			strX[i + 3] = strS[2];
			strX[strlen(strX)] = '\0';
			return;
		}
		i++;
	}
}

*/