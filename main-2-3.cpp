#include <iostream>
#include <stdlib.h>

using namespace std;

extern int sum_if_a_palindrome(int integers[], int length);

int main(void){
    int integers[] = {1,10,3,9,1};
    int length = 5;

    cout << sum_if_a_palindrome(integers, length) << endl;
    return 0;
}