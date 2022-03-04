#include <iostream>
#include <stdlib.h>

extern int minimum(int*,int);

int main(int argc,char **argv)
{
	// your code goes here ...
	int size = 0;
	int array[] = {};
	std::cout << "The minimum is: " << minimum(array, size) << std::endl;
	return 0 ;
}
