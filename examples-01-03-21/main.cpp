// C Program to Merge Two arrays in C Programming
#include <stdio.h>

int main()
{
	int array1[40], array2[40], res[80];
	int x, j, k, n1, n2;

	printf("\nEnter no of elements in 1st array :");
	scanf_s("%d", &n1);

	for (x = 0;x < n1;x++)
	{
		scanf_s("%d", &array1[x]);
	}

	printf("\nEnter no of elements in 2nd array :");
	scanf_s("%d", &n2);

	for (x = 0;x < n2;x++)
	{
		scanf_s("%d", &array2[x]);
	}

	x = 0;
	j = 0;
	k = 0;

	// Merging starts
	while (x < n1 && j < n2)
	{
		if (array1[x] <= array2[j])
		{
			res[k] = array1[x];
			x++;
			k++;
		}
		else
		{
			res[k] = array2[j];
			k++;
			j++;
		}
	}

	/* Some elements in array 'array1' are still remaining where as the array 'array2' is exhausted */
	while (x < n1)
	{
		res[k] = array1[x];
		x++;
		k++;
	}

	/* Some elements in array 'array2' are still remaining where as the array 'array1' is exhausted */
	while (j < n2)
	{
		res[k] = array2[j];
		k++;
		j++;
	}

	// Displaying elements of array 'res'
	printf("\nMerged array is :");

	for (x = 0;x < n1 + n2;x++)
	{
		printf("%d ", res[x]);
	}
	return 0;
}