// Program to Find the Number of Non Repeated Elements in an Array
#include <stdio.h>

int main()
{
	int array[100];
	int* ptr;
	int x, j, k, size, n;

	printf("\n Enter size of the array: ");
	scanf_s("%d", &n);

	printf("\n Enter %d elements of an array: ", n);
	for (x = 0;x < n;x++)
	{
		scanf_s("%d", &array[x]);
	}

	size = n;
	ptr = array;

	for (x = 0;x < size;x++)
	{
		for (j = 0;j < size;j++)
		{
			if (x == j)
			{
				continue;
			}
			else if (*(ptr + x) == *(ptr + j))
			{
				k = j;
				size--;

				while (k < size)
				{
					*(ptr + k) = *(ptr + k + 1);
					k++;
				}

				j = 0;
			}
		}
	}

	printf("\n The array after removing duplicates is: ");
	for (x = 0;x < size;x++)
	{
		printf(" %d", array[x]);
	}

	return 0;
}