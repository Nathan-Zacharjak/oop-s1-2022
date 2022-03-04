#include <iostream>
#include <stdlib.h>

extern int count(int*,int,int);

int main(int argc,char **argv)
{
	// your code goes here ...
	int array[] = {3,0,1,5,3};
	int size = 5;
	int num = 0;

	std::cout << count(array,size,num) << std::endl;
	return 0 ;
}

