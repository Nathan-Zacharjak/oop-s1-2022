#include <iostream>

using namespace std;

extern void print_sevens(int *nums,int length);

int main(int argc, char const *argv[]){
    int array[5] = {1,2,3,4,5};
    int* pointer = array;
    int length = 5;
    int array2[5] = {7,49,14,7,1};
    int* pointer2 = array2;
    int length2 = 5;
    int array3[0] = {};
    int* pointer3 = array3;
    int length3 = 0;

    print_sevens(pointer, length);
    print_sevens(pointer2, length2);
    print_sevens(pointer3, length3);

    return 0;
}
