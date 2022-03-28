#include <iostream>
using namespace std;

int* readNumbers(){
    int length = 10;
    int* numbers = new int[length];

    for (int i = 0; i < length; i++){
        cin >> numbers[i];
    }
    
    return numbers;
}

void printNumbers(int* numbers, int length){
    for (int i = 0; i < length; i++){
        cout << i << " " << numbers[i] << endl;
    }
}