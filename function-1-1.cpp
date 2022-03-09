#include <iostream>
#include <stdlib.h>
using namespace std;
// sums all elements in the array diagonal
int diagonal(int array[4][4]){

	int sum = 0;

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << "i: " << i << " j: " << j << " value: " << array[i][j] << endl;
			if (i == j){
				sum += array[i][j];
			}
			
		}
	}

	return sum;
	
}
