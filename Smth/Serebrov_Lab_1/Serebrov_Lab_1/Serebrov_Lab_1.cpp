// Serebrov_Lab_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cctype>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;
#pragma warning(disable:4996)

void task1_C();
void task1_Cpp();
void task2_C();
void task2_Cpp();
void task3_C();
void task3_Cpp();
void task4_C();
void task4_Cpp();

int main()
{
	task1_C();
	task1_Cpp();
	task2_C();
	task2_Cpp();
	task3_C();
	task3_Cpp();
	task4_C();
	task4_Cpp();


	cin.get();
    return 0;
}

void task1_C()
{
	cout << "Task1 C style:\n";
	char str[100];
	char trig[4] = "int";
	cout << "Input string:";
	gets_s(str);
	char *p = strstr(str, trig);
	if (p)
	{
		strcpy(p, p + strlen(trig));
		cout << "String without 'int': " << str;
	}
	else
	{
		cout << "There is no 'int' in the string";
	}
}

void task1_Cpp()
{
	cout << "\n\nTask1 Cpp style:\n";
	string str;
	string trig = "int";
	cout << "Enter string:";
	getline(cin, str, '\n');
	if (str.find(trig, 0) != string::npos)
	{
		str.erase(str.find(trig, 0), size(trig));
		cout << "String without 'int':" << str;
	}
	else { cout << "There is no 'int' in the string"; }
}

void task2_C() {
	cout << "\n\nTask2 C style:\n";
	char str[100];
	char trig[3] = "un";
	char X1[4] = "til";
	char A[100] = "\0";
	cout << "Enter S:";
	gets_s(str);
	char *p = strstr(str, trig) + strlen(trig);
	if (strlen(str) + strlen(trig) < 100 && strstr(str, trig))
	{
		strcpy(A, p);
		strcpy(p, X1);
		p += strlen(X1);
		strcpy(p, A);
		cout << "String with 'til':" << str;
	}
	else
	{
		cout << "There is no 'un' in the string";
	}
}

void task2_Cpp()
{
	cout << "\n\nTask2 Cpp style:\n";
	string str;
	string str_trig = "un";
	string trig = "til";
	cout << "Enter string S:";
	getline(cin, str, '\n');
	if (str.find(str_trig, 0) != string::npos)
	{
		str.insert(str.find(str_trig, 0) + size(str_trig), trig);
		cout << "String with 'til':" << str;
	}
	else
	{
		cout << "There is no 'un' in the string";
	}

}

void task3_C()
{
	cout << "\n\nTask 3(C):\n";
	char string_S[100];
	char string_X[4];
	char str_trig[] = ",";
	cout << "Enter string S:";
	gets_s(string_S);
	char *p;
	p = strstr(string_S, str_trig);
	if (p){		
		strncpy(string_X, p+1, 3);
		string_X[3] = '\0';
		cout << "\nX:" << string_X;
	}
	else
	{
		cout << "\nThere is no ','";
	}
}

void task3_Cpp() {
	cout << "\n\nTask 3(C++):\n";
	string string_X;
	string string_S;
	char str_trig[] = ",";
	cout << "Enter string S:";
	getline(cin, string_S, '\n');
	int found = string_S.find_first_of(str_trig);
	if (found != string::npos)
	{
		string_X = string_S.substr(found + 1, 3);
		cout << "\nX:" << string_X << endl;
	}
	else {
		cout << "\nThere is no ,";
	}
}

void task4_C() {
	cout << "\n\nTask 4(C):\n";
	char str[100];
	char str_trig[2] = "a";
	char replacement[3] = "aa";
	char str_end[100];
	cout << "Enter string S:";
	gets_s(str);
	char *x = str;
	if (strstr(str, str_trig))
	{
		while ((x = strstr(x, str_trig)) != NULL)
		{
			strncpy(str_end, strstr(x, str_trig) + 1,60);
			strncpy(x, replacement, 2);
			x += 2;
			strncpy(x, str_end, 60);
		}
		cout << "String with double a:" << str << endl;
	}
	else
	{
		cout << "There is no a";
	}
}

void task4_Cpp() {
	cout << "\n\nTask4 Cpp:\n";
	string str;
	string str_trig = "a";
	string replacement = "aa";
	int x = str_trig.size();
	cout << "Enter string S:";
	getline(cin, str, '\n');
	int found = str.find_first_of(str_trig);
	if (found != string::npos) {
		while (found != string::npos) {
			str.replace(found,1,replacement);
			found = str.find_first_of(str_trig, found + 2);
		}
		cout << str;
	}
	else {
		cout << "There is no a";
	}
}