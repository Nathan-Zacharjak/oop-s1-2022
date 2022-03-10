#include <stdlib.h>
#include <iostream>

using namespace std;

// function to ...
void print_scaled_matrix(int array[3][3],int scale){
	// your code goes here

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			array[i][j] *= scale;
			cout << array[i][j];
			if (j != 3) {
				cout << " ";
			}
		}
		cout << endl;
	}

	return;
	
}
