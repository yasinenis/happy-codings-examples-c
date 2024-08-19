// Program to Calculate Sum & Average of an Array
#include <stdio.h>

#define maxisize 10

void main()
{
	int array[maxisize];

	int j, num, negative_sum = 0, positive_sum = 0;

	float total = 0.0, average;

	printf("Enter the value of N \n");

	scanf_s("%d", &num);

	printf("Enter %d numbers (-ve, +ve and zero) \n", num);

	for (j = 0;j < num;j++)
	{
		scanf_s("%d", &array[j]);
	}

	printf("Input array elements \n");

	for (j = 0;j < num;j++)
	{
		printf("%+3d\n", array[j]);
	}

	/* Summation starts */

	for (j = 0;j < num;j++)
	{
		if (array[j] < 0)
		{
			negative_sum = negative_sum + array[j];
		}
		else if (array[j] > 0)
		{
			positive_sum = positive_sum + array[j];
		}
		else if (array[j] == 0)
		{
			;
		}

		total = total + array[j];
	}

	average = total / num;

	printf("\n Sum of all negative numbers = %d\n", negative_sum);

	printf("Sum of all positive numbers = %d\n", positive_sum);

	printf("\n Average of all input numbers = %.2f\n", average);
}