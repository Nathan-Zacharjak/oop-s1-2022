#include <iostream>
#include <stdlib.h>

extern void print_scaled_matrix(int [3][3],int);

int main(int argc,char **argv){
	// your code goes here ...
	int array[3][3] = {{1,2,3},
				       {3,4,0},
				       {6,7,8}
					  };
	int scale = 9;

	print_scaled_matrix(array, scale);

	return 0;
}
