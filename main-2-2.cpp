#include <iostream>
#include <stdlib.h>
using namespace std;
extern int binary_to_number(int [], int);

int main(int argc,char **argv){
	// your code goes here ...
	int num = 5;
	int* pointer = &num;
	cout << pointer << " value: " << *pointer << endl;
	
	return 0;
}

