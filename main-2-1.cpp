#include <iostream>
using namespace std;
extern float arithmetic_ops(float left, float right, string op);

int main(int argc, char const *argv[]){
    float left = 0.0;
    float right = 0.0;
    string op = "+";

    cout << "Enter 1st number:" << endl;
    cin >> left;
    cout << "Enter 2nd number:" << endl;
    cin >> right;
    cout << "Enter operator: + or -" << endl;
    cin >> op;
    
    cout << arithmetic_ops(left, right, op) << endl;

    return 0;
}
