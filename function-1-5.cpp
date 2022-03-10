#include <stdlib.h>
#include <iostream>

using namespace std;

// function to ...
void print_summed_matrices(int array1[3][3],int array2[3][3]){
	// Your code goes here ...
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << array1[i][j] + array2[i][j] << " ";
		}
		cout << endl;
	}

	return;
}
