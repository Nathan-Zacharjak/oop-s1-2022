#include <iostream>
#include <stdlib.h>

extern double sumeven(double*,int);

int main(int argc,char **argv)
{
	// your code goes here ...
	int size = 5;
	double array[] = {1,2,3,4,5};
	std::cout << "The even sum is: " << sumeven(array, size) << std::endl;
	return 0 ;
}
