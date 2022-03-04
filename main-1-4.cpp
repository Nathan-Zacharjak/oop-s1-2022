#include <iostream>
#include <stdlib.h>

extern int sumtwo(int*,int*,int);

int main(int argc,char **argv)
{
	// your code goes here ...
	int array[] = {1,2,3,4};
	int secondarray[] = {0,-1,-2,-3};

	std::cout << sumtwo(array, secondarray, 0) << std::endl;
	return 0 ;
}
