// C program to find second largest number in an array
#include <stdio.h>
#include <limits.h>  // for INT_MIN

#define maxsize 1000

int main()
{
	int arr[maxsize], N, j;
	int max1, max2;

	/* Input size of the array */
	printf("Enter size of the array(1-1000): ");
	scanf_s("%d", &N);

	/* Input array elements */
	printf("Enter elements in the array: ");
	for (j = 0;j < N;j++)
	{
		scanf_s("%d", &arr[j]);
	}

	max1 = max2 = INT_MIN;

	/*
	* Check for first largest and second largest till N
	*/
	for (j = 0;j < N;j++)
	{
		if (arr[j] > max1)
		{
			/*
			* If current element of the array is first largest
			* then make current max as second max
			* and then max as current array element
			*/
			max2 = max1;
			max1 = arr[j];
		}
		else if(arr[j] > max2 && arr[j] < max1)
		{
			/*
			* If current array element is less than first largest
			* but is greater than second largest then make it
			* second largest
			*/
			max2 = arr[j];
		}
	}

	printf("First largest = %d\n", max1);
	printf("Second largest = %d", max2);
}