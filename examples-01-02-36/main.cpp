// Find the Sum of Contiguous Subarray within a1-D Array of Numbers which has the Largest Sum
#include <stdio.h>
#include <stdlib.h>

int maxSubArraySum(int a[], int size, int* begin, int* end)
{
	int max_so_far = 0, max_end = 0;
	int j, current_index = 0;
	
	for (j = 0;j < size;j++)
	{
		max_end = max_end + a[j];
		if (max_end <= 0)
		{
			max_end = 0;
			current_index = j + 1;
		}
		else if (max_so_far < max_end)
		{
			max_so_far = max_end;
			*begin = current_index;
			*end = j;
		}
	}

	return max_so_far;
}

int main()
{
	int arr[] = { 8,-4,13,8,-8,18,13,-5 };
	int start = 0, end = 0;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("The max sum is %d", maxSubArraySum(arr, size, &start, &end));
	printf(" The begin and End are %d & %d", start, end);
	getchar();
	return 0;
}