// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cctype>
#include <cstdio>
#include <iostream>

using namespace std;
#pragma warning(disable:4996)

int main()
{
	char s1[10] = "abcdef", s2[10] = "de";
	char *p;
	p = strstr(s1, s2);
	if (p) {
		strcpy(p, p + strlen(s2));
		printf("\n%s\n", s1);
	}
	else printf("\nNo such substring!!!\n");
    return 0;
}

