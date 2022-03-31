#include <iostream>

using namespace std;

extern int lookup_tax_bracket(int income);

int main(void){
    cout << lookup_tax_bracket(10000) << endl;
    cout << lookup_tax_bracket(15000) << endl;
    cout << lookup_tax_bracket(30000) << endl;
    cout << lookup_tax_bracket(80000) << endl;
    cout << lookup_tax_bracket(200000) << endl;
    
    return 0;
}