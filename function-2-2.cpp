#include <iostream>
#include <stdlib.h>

using namespace std;

// function to ...
int binary_to_number(int binary_digits[], int number_of_digits){
	// your code goes here
	int base10 = 0;
	int base2power = 1;

	for(int i = number_of_digits - 1; i >= 0; i--){
		base10 += binary_digits[i] * base2power;
		base2power *= 2;
	}

	return base10;
}
