// Largest Sum Contiguous Subarray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int maxSubArraysum(int a[], int size) {
	int max_so_far = INT_MIN, max_ending_here = 0;
	for (int i = 0; i < size; i++) {
		max_ending_here = max_ending_here + a[i];

		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}

int main()
{
	int a[] = { -2, -3 ,4, -1, -2, 1, 5, -3 };
	int n = sizeof(a) / sizeof(a[0]);
	int max_sum = maxSubArraysum(a, n);
	cout << "Maximum contiguous sum is " << max_sum << endl;


    return 0;
}

