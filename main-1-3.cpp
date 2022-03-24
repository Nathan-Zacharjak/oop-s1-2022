#include <iostream>
#include <string>

using namespace std;

extern void cpyia(int old_array[],int new_array[],int length);

int main(int argc, char const *argv[]){
    int array[5] = {1,2,3,4,5};
    int array2[5];
    int length = 5;

    cpyia(array, array2, length);

    return 0;
}
