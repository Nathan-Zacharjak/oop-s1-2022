#include <iostream>
#include <stdlib.h>

extern int maximum(int*,int);

int main(int argc,char **argv)
{
	// your code goes here ...
	int array[] = {-4,-9,0,2,1};
	int size = 5;
	std::cout << maximum(array,size) << std::endl;
	return 0 ;
}

