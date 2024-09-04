// Program to Merge the Elements of 2 Sorted Array
#include <stdio.h>

int main()
{
	int array1[80], array2[80], array3[160], m, n, x, j, k = 0;

	printf("\n Enter size of array Array 1: ");
	scanf_s("%d", &m);

	printf("\n Enter sorted elements of array 1: \n");
	for (x = 0;x < m;x++)
	{
		scanf_s("%d", &array1[x]);
	}

	printf("\n Enter size of array 2: ");
	scanf_s("%d", &n);

	printf("\n Enter sorted elements of array 2: \n");
	for (x = 0;x < n;x++)
	{
		scanf_s("%d", &array2[x]);
	}

	x = 0;
	j = 0;
	while (x < m && j < n)
	{
		if (array1[x] < array2[j])
		{
			array3[k] = array1[x];
			x++;
		}
		else
		{
			array3[k] = array2[j];
			j++;
		}
		k++;
	}

	if (x >= m)
	{
		while (j < n)
		{
			array3[k] = array2[j];
			j++;
			k++;
		}
	}

	if (j >= n)
	{
		while(x < m)
		{
			array3[k] = array1[x];
			x++;
			k++;
		}
	}

	printf("\n After merging: \n");
	for (x = 0;x < m + n;x++)
	{
		printf("\n%d", array3[x]);
	}
	return 0;
}