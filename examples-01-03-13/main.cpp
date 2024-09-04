// Program to Insert an Element in a Specified Position in a given Array
#include <stdio.h>

int main()
{
	int array[8];
	int x, j, n, m, temp, key, pos;

	printf("Enter how many elements \n");
	scanf_s("%d", &n);

	printf("Enter the elements \n");
	for (x = 0;x < n;x++)
	{
		scanf_s("%d", &array[x]);
	}

	printf("Input array elements are \n");
	for (x = 0;x < n;x++)
	{
		printf("%d\n", array[x]);
	}

	for (x = 0;x < n;x++)
	{
		for (j = x + 1;j < n;j++)
		{
			if (array[x] > array[j])
			{
				temp = array[x];
				array[x] = array[j];
				array[j] = temp;
			}
		}
	}

	printf("Sorted list is \n");
	for (x = 0;x < n;x++)
	{
		printf("%d\n", array[x]);
	}

	printf("Enter the element to be inserted \n");
	scanf_s("%d", &key);

	for (x = 0;x < n;x++)
	{
		if (key < array[x])
		{
			pos = x;
			break;
		}

		if (key > array[n - 1])
		{
			pos = n;
			break;
		}
	}

	if (pos != n)
	{
		m = n - pos + 1;
		for (x = 0;x <= m;x++)
		{
			array[n - x + 2] = array[n - x + 1];
		}
	}

	array[pos] = key;
	printf("Final list is \n");

	for (x = 0;x < n + 1;x++)
	{
		printf("%d\n", array[x]);
	}
	return 0;
}