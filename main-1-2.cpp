#include <iostream>
#include <stdlib.h>

extern double average(int*,int);

using namespace std;

int main(int argc,char **argv)
{
	// your code goes here ...
	int array[] = {1,2,3,4};
	int size = 4;

	cout << average(array,size) << endl;
	cout << average(array,0) << endl;
	return 0 ;
}

