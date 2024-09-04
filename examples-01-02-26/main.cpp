// Find the Biggest Number in an Array of Numbers using Recursion
#include <stdio.h>
#include <stdlib.h>

int large(int[], int, int);

int main()
{
	int size;
	int largest;
	int list[25];
	int j;

	printf("Enter size of the list:");
	scanf_s("%d", &size);

	printf("Printing the list:\n");
	for (j = 0;j < size;j++)
	{
		list[j] = rand() % size;
		printf("%d\t", list[j]);

	}

	if (size == 0)
	{
		printf("Empty list\n");
	}
	else
	{
		largest = list[0];
		largest = large(list, size - 1, largest);
		printf("\nThe largest number in the list is: %d\n", largest);
	}
}

int large(int list[], int size, int largest)
{
	if (size == 1)
	{
		return largest;
	}

	if (size > -1)
	{
		if (list[size] > largest)
		{
			largest = list[size];
		}

		return(largest = large(list, size - 1, largest));
	}
	else
	{
		return largest;
	}
}