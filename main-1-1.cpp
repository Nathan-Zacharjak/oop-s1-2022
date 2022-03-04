#include <iostream>
#include <stdlib.h>

extern int sum_array(int*, int);

int main(int argc,char **argv)
{
	// your code goes here ...
	int size = 5;
	int array[5] = {0,1,2,3,4};
	int sum = sum_array(array, size);
	std::cout << "The sum is: " << sum << std::endl;
	return 0;
}

