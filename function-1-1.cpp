// function to ...
int sum_array(int array[], int n)
{
	// if the array size is less than 1, abort
	if (n < 1)
	{
		return 0;
	}

	int sum = 0;

	// sum all elements in the array
	for (int i = 0; i < n; i++)
	{
		sum = array[i] + sum;
	}

	return sum;
	
}
