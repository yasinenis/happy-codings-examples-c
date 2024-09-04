// C Program to Delete duplicate elements from an array
#include <stdio.h>

int main()
{
	int array[50], x, j, k, size;
	printf("\nEnter array size : ");
	scanf_s("%d", &size);

	printf("\nAccept Numbers : ");
	for (x = 0;x < size;x++)
	{
		scanf_s("%d", &array[x]);
	}

	printf("\nArray with Unique list : ");
	for (x = 0;x < size;x++)
	{
		for (j = x + 1;j < size;)
		{
			if (array[j] == array[x])
			{
				for (k = j;k < size;k++)
				{
					array[k] = array[k + 1];
				}
				size--;
			}
			else;
			j++;
		}
	}
	for (x = 0;x < size;x++)
	{
		printf("%d ", array[x]);
	}
	return 0;
}