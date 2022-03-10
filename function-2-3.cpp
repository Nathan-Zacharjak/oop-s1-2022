#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

bool is_a_palindrome(int integers[], int length){
	int count = 0;

	for (int i = length - 1; i >= 0; i--){
		if (integers[count] != integers[i]){
			return false;
		}
		count += 1;
	}

	return true;
}

int sum_elements(int integers[], int length){
	int sum = 0;

	for (int i = 0; i < length; i++){
		sum += integers[i];
	}

	return sum;
}

// function to ...
int sum_if_a_palindrome(int integers[], int length){
	// your code goes here
	if (length < 1){
		return -1;
	} else if (is_a_palindrome(integers,length)){
		return sum_elements(integers,length);
	} else {
		return -2;
	}
	
	
	return 1;
}
