#include <iostream>
#include <stdlib.h>

using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits){
    int power_of_2 = 1;
    int decimalNumber = 0;

    for (int i = number_of_digits - 1; i >= 0; i--){
        decimalNumber += binary_digits[i] * power_of_2;
        power_of_2 *= 2;
    }

    return decimalNumber;
    
}