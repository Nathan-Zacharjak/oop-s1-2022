int **copy_to_pointer_array(int *vals, int len){
    int** pointers = new int*[len];

    for (int i = 0; i < len; i++){
        pointers[i] = &vals[i];
    }
    

    return pointers;
}