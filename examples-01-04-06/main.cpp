// Program to Sort N numbers in Ascending Order using Bubble Sort
#include <stdio.h>

#define maxsize 100

void main()
{
	int array[maxsize];
	int x, j, num, temp;

	printf("Enter the value of num \n");
	scanf_s("%d", &num);

	printf("Enter the elements one by one \n");
	for (x = 0;x < num;x++)
	{
		scanf_s("%d", &array[x]);
	}

	printf("Input array is \n");
	for (x = 0;x < num;x++)
	{
		printf("%d\n", array[x]);
	}

	/* Bubble sorting begins */
	for (x = 0;x < num;x++)
	{
		for (j = 0;j < (num - x - 1);j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	printf("Sorted array is...\n");
	for (x = 0;x < num;x++)
	{
		printf("%d\n", array[x]);
	}
}