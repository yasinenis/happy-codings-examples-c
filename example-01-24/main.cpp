// Program to Calculate the Sum of the Array Elements using Pointer
#include <stdio.h>
#include <malloc.h>
void main()
{
	int x, n, sum = 0;
	int* a;
	
	printf("Enter the size of array A \n");
	scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	printf("Enter Elements of First List \n");

	for (x = 0;x < n;x++)
	{
		scanf_s("%d", a + x);
	}

	/* Compute the sum of all elements in the given array */
	for (x = 0;x < n;x++)
	{
		sum = sum + *(a + x);
	}

	printf("Sum of all elements in array = %d\n", sum);
}