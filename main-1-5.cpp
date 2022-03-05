#include <iostream>
#include <stdlib.h>

extern int count_even(int);

int main(int argc,char **argv)
{
	// your code goes here ...
	std::cout << count_even(-5) << std::endl;
	return 0 ;
}
