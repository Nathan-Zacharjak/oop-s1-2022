// function to ...
double average(int array[], int n)
{
	// your code goes here

	if (n<1){
		return 0.0;
	}

	double sum = 0;
	for (int i = 0; i < n; i++){
		sum = sum + array[i];
	}

	return sum / n;
}
