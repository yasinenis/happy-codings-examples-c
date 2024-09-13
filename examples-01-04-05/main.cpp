// sort even and odd elements of array separately
#include <stdio.h>
#include <limits.h>

#define maxsize 1000

/* Functions used in this program */
void arrange(int arr[], int len, int pivot);
void sort(int arr[], int start, int end);
void print(int arr[], int len);

int main()
{
	int arr[maxsize], x, n;
	int pivot, evenCount, oddCount;

	pivot = 0;
	evenCount = oddCount = 0;

	/* Read size and elements in the array */
	printf("Enter size of the array: ");
	scanf_s("%d", &n);
	
	printf("Enter elements in the array: ");
	for (x = 0;x < n;x++)
	{
		scanf_s("%d", &arr[x]);

		// If current element is odd then increase pivot
		if (arr[x] & 1)
		{
			oddCount++;
		}
		else
		{
			evenCount++;
		}
	}

	/* Pivot is position that seperates even and odd elements */
	pivot = evenCount;

	print(arr, n);

	// Arranges all even and odd elements sequentially
	arrange(arr, n, pivot);

	// Print elements after arranging even and odd elements
	printf("\nElements after arranging even and odd elements separately\n");
	print(arr, n);

	//Sorts even part of the array
	sort(arr, 0, pivot);

	//Sorts odd part of the array
	sort(arr, pivot, n);

	//Prints the final sorted array
	printf("\nFinal array after sorting even and odd elements seperately\n");
	print(arr, n);

	return 0;
}


/* Arranges all even and odd elements of the array separately. Puts all even elements first then all odd elements */
void arrange(int arr[], int len, int pivot)
{
	int x, j, temp;

	for (x = 0;x < pivot;x++)
	{
		/* If current element of array is odd put it into odd element place */
		if (arr[x] & 1)
		{
			for (j = pivot;j < len;j++)
			{
				// Look for an even element then swap with odd element
				if (!(arr[j] & 1))
				{
					temp = arr[j];
					arr[j] = arr[x];
					arr[x] = temp;
					break;
				}
			}
		}
	}
}

/* Sorts the elements of array within a range */
void sort(int arr[], int start, int end)
{
	int x, j, temp;
	int len = end;

	for (x = start;x < len;x++)
	{
		for (j = x + 1;j < len;j++)
		{
			if (arr[j] < arr[x])
			{
				temp = arr[x];
				arr[x] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

/* Prints the entire integer array */
void print(int arr[], int len)
{
	int x;
	printf("Elements in the array: ");
	for (x = 0;x < len;x++)
	{
		printf("%d ", arr[x]);
	}
	printf("\n");
}
