#include <iostream>
#include <stdlib.h>

using namespace std;

extern int sum_if_a_palindrome(int [], int );

int main(int argc,char **argv){
	// your code goes here ...
	int num = 42;
	int* pointer = &num;
	*pointer += 5;
	cout << *pointer << endl;
	*pointer -= 2;
	cout << *pointer << endl;

	return 0;
}
