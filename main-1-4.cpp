#include <iostream>

using namespace std;

extern void cpyda(double *old_array,double *new_array,int length);

int main(int argc, char const *argv[]){
    double array[5] = {1.1,2.2,3.3,4.4,5.5};
    double array2[5];
    int length = 5;

    cpyda(array, array2, length);

    return 0;
}
