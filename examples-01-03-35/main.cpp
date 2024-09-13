// Program to Print the Number of Odd & Even Numbers in an Array
#include <stdio.h>

int main()
{
	int array[88], i, j;
	
	printf("Enter the size of an array \n");
	scanf_s("%d", &j);

	printf("Enter the elements of the array \n");
	for (i = 0;i < j;i++)
	{
		scanf_s("%d", &array[i]);
	}

	printf("Even numbers in the array are - ");
	for (i = 0;i < j;i++)
	{
		if (array[i] % 2 == 0)
		{
			printf("%d \t", array[i]);
		}
	}

	printf("\n Odd numbers in the array are -");
	for (i = 0;i < j;i++)
	{
		if (array[i] % 2 != 0)
		{
			printf("%d \t", array[i]);
		}
	}
}