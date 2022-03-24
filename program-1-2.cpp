#include <iostream>
using namespace std;

int main()
{
	int *ptr, a[10]={1,2,3,4,5,6,7,8,9,10};
	int *b = new int[10];

	/* address of a[0] is assigned to ptr */
	ptr = &a[0];   

	// I want to copy the values in a into b; since i've declared b
    // as a dynamically allocated array,
	// I can now do pointer magic!!
	// lol memory leak right here VVV
	b = ptr;
	// The address of b just got overwritten, so now that
	// 10 ints worth of heap memory it was assigned is leaked

	cout << "Value of first element in b " << b[0] << endl; 
	cout << "Value of second element in b " << b[1] << endl; 

	a[1] = 42;
	cout << "Value of second element in b " << b[1] << endl;

	return 0;
}
