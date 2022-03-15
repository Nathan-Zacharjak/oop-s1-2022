#include <iostream>
#include <stdlib.h>

using namespace std;

extern int sum_min_and_max(int [], int);

int main(int argc,char **argv){
	// your code goes here ...
	int array[] = {1,3,3,2,1};
	int count = 5;

	int* pointer = array;
	
	for (int i = 0; i < count; i++){
		cout << *(pointer + i) << endl;
	}

	return 0;
}
