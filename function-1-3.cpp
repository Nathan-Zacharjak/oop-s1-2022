#include <iostream>

using namespace std;

void cpyia(int old_array[],int new_array[],int length){
    for (int i = 0; i < length; i++){
        *(old_array + i) = *(new_array + i);
    }
    
    // for (int i = 0; i < length; i++){
    //     cout << new_array[i] << endl;
    // }
    

    return;
}