#include <iostream>

using namespace std;

extern int sum_middles(int **vals,int num_rows, int num_cols);

int main(void){
    int row1[]={10,15,9};
    int row2[]={11,5,3};
    int row3[]={8,56,1};
    int *vals[]={row1,row2,row3};
    int ncols=3;
    int nrows=3;

    cout << sum_middles(vals,nrows,ncols) << endl;
    
    return 0;
}