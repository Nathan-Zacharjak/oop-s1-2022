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

bool equalsArray(int *numbers1,int *numbers2,int length){
    if (length < 1){
        return false;
    }
    
    for (int i = 0; i < length; i++){
        if (numbers1[i] != numbers2[i]){
            return false;
        }
    }

    return true;
}

int* reverseArray(int *numbers1,int length){
    int* reverseArray = new int[length];
    int reverseArrayIndex = 0;

    for (int i = length - 1; i >= 0; i--){
        reverseArray[reverseArrayIndex] = numbers1[i];
        reverseArrayIndex++;
    }
    
    return reverseArray;
}