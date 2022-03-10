#include <iostream>
#include <stdlib.h>

using namespace std;

int min_integer(int integers[], int length){
	if (length < 1){
		return -1;
	}
	int min = integers[0];

	for (int i = 0; i < length; i++){
		if (integers[i] < min){
			min = integers[i];
		}
	}

	return min;
}

int max_integer(int integers[], int length){
	if (length < 1){
		return -1;
	}
	int max = integers[0];

	for (int i = 0; i < length; i++){
		if (integers[i] > max){
			max = integers[i];
		}
	}

	return max;
}

// function to ...
int sum_min_and_max(int integers[], int length){
	// your code goes here
	if (length < 1){
		return -1;
	}

	return max_integer(integers,length) + min_integer(integers,length);
}
