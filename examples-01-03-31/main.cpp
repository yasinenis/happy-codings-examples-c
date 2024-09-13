// c programming print all unique elements in an array
#include <stdio.h>

#define maxsize 100

int main()
{
	int arr[maxsize], freq[maxsize];
	int size, x, j, count;

	/* Input size of array and elements in array */
	printf("Enter size of array: ");
	scanf_s("%d", &size);
	printf("Enter elements in array: ");
	for (x = 0;x < size;x++)
	{
		scanf_s("%d", &arr[x]);
		freq[x] = -1;
	}

	/* Find frequency of each element */
	for (x = 0;x < size;x++)
	{
		count = 1;
		for (j = x + 1;j < size;j++)
		{
			if (arr[x] == arr[j])
			{
				count++;
				freq[j] = 0;
			}
		}

		if (freq[x] != 0)
		{
			freq[x] = count;
		}
	}

	/* Print all unique elements of array */
	printf("\nUnique elements in the array are: ");
	for (x = 0;x < size;x++)
	{
		if (freq[x] == 1)
		{
			printf("%d ", arr[x]);
		}
	}
	return 0;
}