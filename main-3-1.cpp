#include <iostream>

using namespace std;

extern int count_even_nums_above(int vals[], int above, int length);

int main(void){
    int vals[]={1,2,3,4,5,6,7};
    int vals_length=7;
    int vals2[]={-5,-4,-3,-2,-1};
    int vals_length2=5;

    cout << count_even_nums_above(vals,3,vals_length) << endl;
    cout << count_even_nums_above(vals2,-4,vals_length2) << endl;
    
    return 0;
}