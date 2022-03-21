#include <iostream>
using namespace std;

int size_of_variable_star_arr(){
    int *arr = new int[3];
    arr[1] = 3;
    cout << arr[1] << endl;
    delete [] arr;
    // arr = nullptr;
    // cout << arr[1] << endl;
    return sizeof(*arr);
}