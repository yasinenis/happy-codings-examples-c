// Program to Find the Largest Two Numbers in a given Array
#include <stdio.h>

#define MAX 4

int main()
{
	int array[MAX], j, largest1, largest2, temp;
	
	printf("Enter %d integer numbers \n", MAX);
	for (j = 0;j < MAX;j++)
	{
		scanf_s("%d", &array[j]);
	}

	printf("Input integer are \n");
	for (j = 0;j < MAX;j++)
	{
		printf("%d5d", array[j]);
	}
	
	printf("\n");

	/* assume first element of array is the first largest */
	largest1 = array[0];

	/* assume first element of array is the second largest */
	largest2 = array[1];
	if (largest1 < largest2)
	{
		temp = largest1;
		largest1 = largest2;
		largest2 = temp;
	}

	for (j = 2;j < 4;j++)
	{
		if (array[j] >= largest1)
		{
			largest2 = largest1;
			largest1 = array[j];
		}
		else if (array[j] > largest2)
		{
			largest2 = array[j];
		}
		
	}

	printf("n%d is the first largest \n", largest1);
	printf("%d is the second largest \n", largest2);
	printf("nAverage of %d and %d = %d\n", largest1, largest2, (largest1 + largest2) / 2);

	return 0;
}