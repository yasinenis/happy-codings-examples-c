// Print the Alternate Elements in an Array
#include <stdio.h>

int main()
{
	int array[25];
	int j, temp;

	printf("enter the element of an array \n");
	for (j = 0;j < 25;j++)
	{
		scanf_s("%d", &array[j]);
	}

	printf("Alternate elements of a given array \n");
	for (j = 0;j < 25;j += 2)
	{
		printf("%d\n", array[j]);
	}
}