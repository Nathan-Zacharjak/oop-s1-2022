#include <iostream>

using namespace std;

int maximum_sum(int *nums,int length){
    if (length < 1){
        return 0;
    }

    int maxSum = 0;
    
    for (int firstIndex = 0; firstIndex < length; firstIndex++){
        int tempSum = 0;
        cout << nums[firstIndex] << endl;
        for (int i = firstIndex; i < length - firstIndex; i++){
            tempSum += nums[i];
            if (tempSum > maxSum){
                maxSum = tempSum;
            }
        }
        
    }
    
    return maxSum;
}