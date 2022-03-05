// function to ...
int maximum(int array[], int n)
{
	// your code goes here
	if (n < 1){
		return 0;
	}

	int max = array[0];

	for(int i = 0; i < n; i++){
		if (array[i] > max){
			max = array[i];
		}
	}

	return max;
}
