#include <iostream>

using namespace std;

extern int maximum_sum(int *nums,int length);

int main(int argc, char const *argv[]){
    int array[] = { 31, -41, 59, 26, -53};
    int length = 5;
    

    cout << maximum_sum(array, length) << endl;

    return 0;
}
