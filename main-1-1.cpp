#include <iostream>
#include <stdlib.h>

extern int diagonal(int[4][4]);

int main(int argc,char **argv){
	int array[4][4] = {{0 ,1 ,2 ,3 },
					   {4 ,5 ,6 ,7 },
					   {8 ,9 ,10,11},
					   {12,13,14,15}};
	
	int sum = diagonal(array);
	std::cout << "The sum is: " << sum << std::endl;
	return 0;
}

