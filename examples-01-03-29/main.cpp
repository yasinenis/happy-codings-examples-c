// C program to print all negative elements in array
#include <stdio.h>

#define maxsize 100

int main()
{
	int arr[maxsize];
	int j, N;

	/* Input size of the array */
	printf("Enter size of the array: ");
	scanf_s("%d", &N);

	/* Input elements in the array */
	printf("Enter elements in array : ");
	for (j = 0;j < N;j++)
	{
		scanf_s("%d", &arr[j]);
	}

	printf("\nAll negative elements in array are : ");
	for (j = 0;j < N;j++)
	{
		/* If current array elements is negative */
		if (arr[j] < 0)
		{
			printf("%d\t", arr[j]);
		}
	}
	return 0;
}