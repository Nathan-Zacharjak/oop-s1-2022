// function to ...
#include <iostream>
int median(int array[], int n)
{
	// your code goes here ...
	if (n < 0 || n % 2 == 0)
	{
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		// Start with the leftmost value of the array
		// we are looking at
		int min = i;
		for (int j = i; j < n; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		// Put the value of the element we're looking at in temp
		int temp = array[i];
		// Swap the value of the element we're looking at with
		// the element that had the minmum value
		array[i] = array[min];
		array[min] = temp;
	}

	// Divide n/2 +1 to get the medium
	int middleIndex = (n/2)+0.5;
	int median = array[middleIndex];
	return median;
}
