#include <iostream>
#include <stdlib.h>

using namespace std;

bool is_a_palindrome(int integers[], int length){
    if (length < 1){
        return -1;
    }

    int intCounter = 0;
    
    for (int i = length - 1; i >= 0; i--){
        if (integers[i] != integers[intCounter]){
            return false;
        }
        
        intCounter++;
    }

    return true;
    
}

int sum_elements(int integers[], int length) {
    if (length < 1){
        return -1;
    }
    
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum += integers[i];
    }

    return sum;
    
}

int sum_if_a_palindrome(int integers[], int length){
    if (length < 1){
        return -1;
    } else if (is_a_palindrome(integers, length)){
        return sum_elements(integers, length);
    } else {
        return -2;
    }
    
}