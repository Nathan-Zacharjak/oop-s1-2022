#include <iostream>
#include <stdlib.h>

extern void twofivenine(int*,int);

int main(int argc,char **argv)
{
	// your code goes here ...
	int array[] = {9,9,9,9,5,9,9,9,9};
	int size = 9;
	twofivenine(array,size);
	return 0 ;
}
