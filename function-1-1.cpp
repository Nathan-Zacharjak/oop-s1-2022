#include <iostream>
#include <stdlib.h>
using namespace std;
// sums all elements in the array diagonal
void print_class(string courses[4], string students[], int report_card[][4], int nstudents){

	for (int i = 0; i < nstudents + 1; i++){
		if (i == 0){
			cout << "Report Card ";
			for (int i = 0; i < 4; i++){
				cout << courses[i] << " ";
			}
			
		} else {
			for (int j = 0; j < 5; j++){
				if (j == 0){
					cout << students[i - 1];
				} else {
					cout << report_card[i - 1][j - 1];
				}
				cout << " ";
			}
		}
		cout << endl;
	}

	return;
	
}
