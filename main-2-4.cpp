#include <iostream>
#include <stdlib.h>

using namespace std;

extern int sum_min_and_max(int [], int);

int main(int argc,char **argv){
	// your code goes here ...
	int array[] = {1,2,3,2,1};
	int size = 5;

	cout << sum_min_and_max(array,size) << endl;

	return 0;
}
