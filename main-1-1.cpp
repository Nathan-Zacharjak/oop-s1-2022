#include <iostream>
#include <string>

using namespace std;

extern void copy_2d_strings(string first[][2], string second[][2], int n);

int main(int argc, char const *argv[]){
    string array[3][2] = {{"hi!", "there"}, {"Hi", "hello"}, {":)", ":O"}};
    string array2[3][2];
    int size = 3;

    copy_2d_strings(array, array2, size);

    return 0;
}
