// program to search element in an array
#include <stdio.h>

int main()
{
	int arr[88];
	int size, x, j, flag;

	/* Input size of the array */
	printf("Enter size of array: ");
	scanf_s("%d", &size);

	/* Input elements of the array */
	printf("Enter elements in array: ");
	for (x = 0;x < size;x++)
	{
		scanf_s("%d", &arr[x]);
	}

	printf("\nEnter the element to search within the array: ");
	scanf_s("%d", &j);

	/* Supposes that element is not in the array */
	flag = 0;
	for (x = 0;x < size;x++)
	{
		/* If element is found in the array */
		if (arr[x] == j)
		{
			flag = 1;
			printf("\n%d is found at position %d", j, x + 1);
			break;
		}
	}

	/* If element is not found in array */
	if (flag == 0)
	{
		printf("\n%d is not found in the array", j);
	}

	return 0;
}