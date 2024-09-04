// Find Ceiling & Floor of X given a Sorted Array & a value X
#include <stdio.h>

/* Function to get index of ceiling of x in arr[low..high] */
int ceilSearch(int arr[], int low, int high, int x)
{
	int j;

	/* If x is smaller than or equal to first element,then return the first element */
	if (x <= arr[low])
	{
		return low;
	}

	/* Otherwise, linearly search for ceil value */
	for (j = low;j < high;j++)
	{
		if (arr[j] == x)
		{
			return j;
		}

		/* If x lies between arr[j] and arr[j+1], then return arr[j+1] */
		if (arr[j] < x && arr[j + 1] >= x)
		{
			return j + 1;
		}
	}

	/* If we reach here then x is greater than the last element of the array, return -1 in this case */
	return -1;
}

int main()
{
	int arr[] = { 1,2,8,8,8,13,16 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 3;
	int index = ceilSearch(arr, 0, n - 1, x);

	if (index == -1)
	{
		printf("Ceiling of %d doesn't exist in array ", x);
	}
	else
	{
		printf("ceiling of %d is %d",x,arr[index]);
	}

	getchar();

	return 0;
}