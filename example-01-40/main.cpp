// Logic to count total negative/positive elements in an array

#include <stdio.h>

int main()
{
	int array[88];//Declares an array of size 88
	int j, n, count = 0;

	/* Input size of the array */
	printf("Enter size of the array : ");
	scanf_s("%d", &n);

	/* Input array elements */
	printf("Enter elements in array : ");
	for (j = 0;j < n;j++)
	{
		scanf_s("%d", &array[j]);
	}

	/*
	* Counts total number of negative elements in array
	*/

	for (j = 0;j < n;j++)
	{
		/* Increment count if current array element is negative */
		if (array[j] < 0)
		{
			count++;
		}
	}
	printf("\nTotal number of negative elements = %d", count);
	return 0;
}