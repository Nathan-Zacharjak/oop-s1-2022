#include <iostream>
#include <stdlib.h>

extern void count_numbers(int [4][4]);

int main(int argc,char **argv){
	// your code goes here ...
	int array[4][4] = {{0 ,2 ,2 ,2},
					   {5 ,6 ,7 ,8},
					   {9 ,10,11,12},
					   {13,14,15,16}
	};

	count_numbers(array);

	return 0 ;
}

