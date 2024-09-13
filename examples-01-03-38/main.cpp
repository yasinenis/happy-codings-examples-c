// C Program to Read an Array and Search for an Element
#include <stdio.h>

int main()
{
	int array[20];
	int j, low, mid, high, key, size;
	
	printf("Enter the size of an array\n");
	scanf_s("%d", &size);

	printf("Enter the array elements\n");
	for (j = 0;j < size;j++)
	{
		scanf_s("%d", &array[j]);
	}

	printf("Enter the key\n");
	scanf_s("%d", &key);

	/* search begins */
	low = 0;
	high = (size - 1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key == array[mid])
		{
			printf("Succesful Search\n");
			return 0;
		}
		if (key < array[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	printf("Unsuccesful Search\n");
}