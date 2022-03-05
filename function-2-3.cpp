#include <iostream>
#include <stdlib.h>

using namespace std;

// function to ...
void twofivenine(int array[], int n)
{
	// your code goes here
	int twos = 0;
	int fives = 0;
	int nines = 0;
	for (int i = 0; i < n; i++){
		switch (array[i]){
			case 2:
			twos++;
			break;

			case 5:
			fives++;
			break;

			case 9:
			nines++;
			break;
		}
	}
	
	cout << "2:" << twos << ";5:" << fives << ";9:" << nines << ";" << endl;
}
