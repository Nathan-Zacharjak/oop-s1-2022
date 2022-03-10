#include <vector>
#include <iostream>
#include <stdlib.h>

using namespace std;

// function to ...
void count_numbers(int array[4][4]){
	int count[10] = {0,0,0,0,0,0,0,0,0,0};

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			// Check if values of given array are actually 0-9
			if (array[i][j] >= 0 && array[i][j] <= 9){
				count[array[i][j]] += 1;
			}
		}
	}
	
	for (int i = 0; i < 10; i++){
		cout << i << ":" << count[i] << ";";
	}
	cout << endl;

	return;
}
