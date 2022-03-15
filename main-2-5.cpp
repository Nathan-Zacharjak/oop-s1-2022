#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc,char **argv){
    double array[4][4] = {{1.1,2.2,3.3,4.4},
                          {5.5,6.6,7.7,8.8},
                          {9,10,11,12},
                          {13,14,15,16}};
    int rowCount = 4;
    int columnCount = 4;

    for (int i = 0; i < rowCount; i++){
        double* rowPointer = *(array + i);

        for (int j = 0; j < columnCount; j++){
            cout << *(rowPointer + j) << " ";
        }
        
        cout << endl;
    }
    

    return 0;
}