// function to ...
double sumeven(double array[], int n)
{
	// your code goes here ...
	if (n < 1){
		return 0;
	}

	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			sum += array[i];
		}
	}
	
	return sum;
}
