#include <iostream>

using namespace std;

extern int **copy_to_pointer_array(int *vals, int len);

int main(void){
    int vals[]={1,2,3,4,5};
    int len = 5;
    int **val_ptrs=copy_to_pointer_array(vals,len);
    *(val_ptrs[2])=20;
    *(val_ptrs[0])=10;

    for (int i = 0; i < len; i++){
        cout << *(val_ptrs[i]) << endl;
    }
    
    return 0;
}