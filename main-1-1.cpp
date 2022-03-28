#include <iostream>

using namespace std;

extern int* readNumbers();
extern void printNumbers(int* numbers, int length);

int main(int argc, char const *argv[]){
    int* numbers = readNumbers();
    
    printNumbers(numbers, 10);

    delete[] numbers;

    return 0;
}
