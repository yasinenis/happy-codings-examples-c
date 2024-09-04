// C program to insert an element in array
#include <stdio.h>

#define maxsize 100

int main()
{
	int arr[maxsize];
	int i, size, j, pos;

	/* Input size of the array */
	printf("Enter size of the array :");
	scanf_s("%d", &size);

	/* Input elements in array */
	printf("Enter elements in array :");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);
	}

	/* Input new element and position to insert */
	printf("Enter element to insert :");
	scanf_s("%d", &j);

	printf("Enter the element position : ");
	scanf_s("%d", &pos);

	/* If position of element is not valid */
	if (pos > size + 1 || pos <= 0)
	{
		printf("Invalid position! Please enter position between 1 to %d", size);
	}
	else
	{
		/* Make room for new array element by shifting to right */
		for (i = size;i >= pos;i--)
		{
			arr[i] = arr[i - 1];
		}

		/* Insert new element at given position and increment size */
		arr[pos - 1] = j;
		size++;

		/* Print array after insert operation */
		printf("Array elements after insertion : ");
		for (i = 0;i < size;i++)
		{
			printf("%d\t", arr[i]);
		}
	}

	return 0;
}