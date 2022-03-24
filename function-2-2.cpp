#include <iostream>

using namespace std;

int maximum_sum(int *nums,int length){
    if (length < 1){
        return 0;
    }

    int maxSum = 0;
    
    for (int firstIndex = 0; firstIndex < length; firstIndex++){
        int tempSum = 0;
        for (int i = firstIndex; i < length; i++){
            tempSum += nums[i];
            if (tempSum > maxSum){
                maxSum = tempSum;
            }
        }
        
    }
    
    return maxSum;
}