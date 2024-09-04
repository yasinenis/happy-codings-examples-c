// Find 2 Elements in the Array such that Difference between them is Largest
#include <stdio.h>

int maximum_difference(int array[], int arr_size)
{
	int max_diff = array[1] - array[0];
	int x, j;
	
	for (x = 0;x < arr_size;x++)
	{
		for (j = x + 1;j < arr_size;j++)
		{
			if (array[j] - array[x] > max_diff)
			{
				max_diff = array[j] - array[x];
			}
		}
	}
	return max_diff;
}

int main()
{
	int array[] = { 13,18,44,96,110 };
	printf("Maximum difference is %d", maximum_difference(array, 5));
	getchar();
	return 0;
}