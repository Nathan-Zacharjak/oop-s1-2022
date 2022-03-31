int sum_middles(int **vals,int num_rows, int num_cols){
    int sum = 0;
    int midRow = num_rows / 2;
    int midCol = num_cols / 2;

    for (int i = 0; i < num_rows; i++){
        for (int j = 0; j < num_cols; j++){
            if (i == midRow && j == midCol){
                sum += (vals[i][j] * 2);
            } else if (i == midRow || j == midCol){
                sum += vals[i][j];
            }
        }
        
    }
    
    return sum;
}