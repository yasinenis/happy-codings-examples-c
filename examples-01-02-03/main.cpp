// C Program to Delete the Specified Integer from an Array
#include <stdio.h>

void main()
{
	int vectorx[10];

	int j, n, pos, element, found = 0;
	printf("Enter how many elements\n");
	scanf_s("%d", &n);

	printf("Enter the elements\n");
	for (j = 0;j < n;j++)
	{
		scanf_s("%d", &vectorx[j]);
	}

	printf("Input array elements are\n");
	for (j = 0;j < n;j++)
	{
		printf("%d\n", vectorx[j]);
	}

	printf("Enter the element  to be deleted\n");
	scanf_s("%d", &element);
	for (j = 0;j < n;j++)
	{
		if (vectorx[j] == element)
		{
			found = 1;
			pos = j;
			break;
		}
	}

	if (found == 1)
	{
		for (j = pos;j < n - 1;j++)
		{
			vectorx[j] = vectorx[j + 1];
		}

		printf("The resultant vector is \n");

		for (j = 0;j < n - 1;j++)
		{
			printf("%d\n", vectorx[j]);
		}
	}
	else
		printf("Element %d is not found in the vector\n", element);
}