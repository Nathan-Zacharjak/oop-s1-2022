// function to ...
int count(int array[], int n, int num)
{
	// your code goes here
	if (n<1){
		return 0;
	}

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (array[i] == num)
		{
			count += 1;
		}
		
	}
	
	return count;
}
