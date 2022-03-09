#include <iostream>
#include <stdlib.h>

extern int identity(int [10][10]);

using namespace std;

int main(int argc,char **argv){
	// your code goes here ...
	int array[10][10] = {{1,0,0,0,0,0,0,0,0,0},
						 {0,1,0,0,0,0,0,0,0,0},	
						 {0,0,1,0,0,0,0,0,0,0},	
						 {0,0,0,1,0,0,0,0,0,0},	
						 {0,0,0,0,1,0,0,0,0,0},	
						 {0,0,0,0,0,1,0,0,0,0},	
						 {0,0,0,0,0,0,1,0,0,0},	
						 {0,0,0,0,0,0,0,1,0,0},	
						 {0,0,0,0,0,0,0,0,1,0},	
						 {0,0,0,0,0,0,0,0,0,1},	
	};

	cout << identity(array) << endl;
	return 0 ;
}

