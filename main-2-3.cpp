#include <iostream>

using namespace std;

extern float arithmetic_ops(float left, float right, float (*op)(float,float));
extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float multiply_op(float left, float right);

int main(int argc, char const *argv[]){
    float left = 0.0;
    float right = 0.0;
    string op = "+";

    cout << "Enter 1st number:" << endl;
    cin >> left;
    cout << "Enter 2nd number:" << endl;
    cin >> right;
    cout << "Enter operator: + or - or *" << endl;
    cin >> op;


    float (*opPointer)(float,float);

    if (op == "+"){
        opPointer = add_op;
    } else if (op == "-"){
        opPointer = subtract_op;
    } else {
        opPointer = multiply_op;
    }
    
    cout << arithmetic_ops(left, right, opPointer) << endl;

    return 0;
}
