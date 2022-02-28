#include <iostream>
// Sums together all positive numbers and returns them
int count(int array[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            total += 1;
        }
    }

    return total;
}

//int main() {
//    int test_array[5] = {5,3,4,-1,8};
//    int test_array2[5] = {0,0,0,0,0};
//    std::cout << count(test_array, 5) << std::endl;
//    std::cout << count(test_array2, 5) << std::endl;
//    return 0;
//}