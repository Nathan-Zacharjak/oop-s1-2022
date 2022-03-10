#include <iostream>
#include <stdlib.h>

using namespace std;

extern int sum_if_a_palindrome(int [], int );

int main(int argc,char **argv){
	// your code goes here ...
	int array[] = {1,2,3,2,1};
	int size = 0;

	cout << sum_if_a_palindrome(array,size) << endl;

	return 0;
}
