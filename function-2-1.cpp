#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
// takes a decimal number with 1 to 9 digits, and prints it as binary
using namespace std;

void print_as_binary(string decimal_number){
	// Convert the given string to a number
	int number = stoi(decimal_number);
	// If the number is 0, nothing gets put into the vector
	// So just print 0 for this special case
	if (number == 0){
		cout << 0 << endl;
		return;
	}
	
	vector<int> binary;

	while (number > 0){
		// Get the remainder of the number divided by two
		// to get the digit of the binary number
		int remainder = number % 2;
		binary.push_back(remainder);
		// Divide the number by two to get the next digit
		number = number/2;
	}
	
	bool printedOne = false;

	// This method of getting a binary number gives it to you in reverse
	// So, the array of ints of the binary number is printed out in reverse
	for (int i = binary.size(); i >= 0; i--){
		if (printedOne || binary[i] == 1){
			printedOne = true;
			cout << binary[i];
		}
		
	}
	cout << endl;

	return;
}
