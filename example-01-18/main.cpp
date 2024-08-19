// Program to Calculate Addition of All Elements in Array.
#include <stdio.h>
int main()
{
	int j, array[50], sum, num;

	printf("\nEnter no of elements : ");
	scanf_s("%d", &num);

	// Reading values into Array
	printf("\nEnter the values : ");
	for (j = 0;j < num;j++)
	{
		scanf_s("%d", &array[j]);
	}

	// Computation of total
	sum = 0;
	for (j = 0;j < num;j++)
	{
		sum = sum + array[j];
	}

	// Printing of all elements of array
	for (j = 0;j < num;j++)
	{
		printf("\na[%d]=%d", j, array[j]);
	}

	// Printing of total
	printf("\nSum=%d", sum);

	return (0);
}