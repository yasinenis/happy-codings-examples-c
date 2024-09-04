// program to count even and odd elements in an array

#include <stdio.h>

#define maxsize 100 

int main()
{
	int arr[maxsize];
	int j, N, even, odd;

	/* Input size of the array */
	printf("Enter size of the array: ");
	scanf_s("%d", &N);

	/* Input array elements */
	printf("Enter %d elements in array: ", N);
	for (j = 0;j < N;j++)
	{
		scanf_s("%d", &arr[j]);
	}

	/* Assuming that there are o even and odd elements */
	even = 0;
	odd = 0;

	for (j = 0;j < N;j++)
	{
		/* If the current element of array is even then increment even count */
		if (arr[j] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}

	}
	printf("Total even elements: %d\n", even);
	printf("Total odd elements: %d", odd);
}