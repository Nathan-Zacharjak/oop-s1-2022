#include <iostream>
#include <stdlib.h>

extern int binary_to_number(int [], int);

int main(int argc,char **argv){
	// your code goes here ...
	int array[] = {1,0,1,0,1};
	int size = 5;
	std::cout << binary_to_number(array,size) << std::endl;
	
	return 0;
}

