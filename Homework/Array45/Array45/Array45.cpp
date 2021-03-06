// Array45.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cassert>
#include <cmath>
#include <climits>

void find_close_elements(int arr[], int arr_size, int& idx_a, int& idx_b) {
	idx_a = 0;
	idx_b = 0;

	int result = INT_MAX;
	for (int i = 0; i < arr_size -1; i++) {
		for (int j = i + 1; j < arr_size; j++) {
			if (std::fabs(arr[i] - arr[j]) <= result) {
				result = std::fabs(arr[i] - arr[j]);
				idx_a = i;
				idx_b = j;
			}
		}
	}
}


void test_case(int arr[], int size, int expected_a, int expected_b) {
	int idx_a = -1;
	int idx_b = -1;
	find_close_elements(arr, size, idx_a, idx_b);
	assert(idx_a == expected_a);
	assert(idx_b == expected_b);
}


int main() {
	int arr1[] = { 0 };
	test_case(arr1, 1, 0, 0);

	int arr2[] = { 10, 9, 9 };
	test_case(arr2, 3, 1, 2);

	int arr3[] = { 10, 9, 5 };
	test_case(arr3, 3, 0, 1);

	int arr4[] = { 1, 9, 4 };
	test_case(arr4, 3, 0, 2);

	int arr5[] = { 1, 100000000 };
	test_case(arr5, 2, 0, 1);

	return 0;
}