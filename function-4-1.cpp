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

int secondSmallestSum(int *numbers,int length){
    int smallest = numbers[0];
    int secondSmallest = numbers[0];

    for (int i = 0; i < length; i++){
        int sum = 0;

        for (int j = i; j < length; j++){
            sum = sum + numbers[j];

            if (smallest > sum){
                smallest = sum;
                
            }
            
            if (smallest < sum && secondSmallest > sum){
                secondSmallest = sum;
            }

        }
        
    }

    return secondSmallest;
    
}