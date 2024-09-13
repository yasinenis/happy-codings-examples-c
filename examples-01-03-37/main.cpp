// put even and odd elements of array in two seperate array
#include <stdio.h>

#define maxsize 1000

/* Function to print array */
void printArray(int arr[], int len);

int main()
{
	int arr[maxsize];
	int even[maxsize], odd[maxsize];

	int evenCount, oddCount;
	int j, size;

	/* Input size of the array */
	printf("Enter size of the array: ");
	scanf_s("%d", &size);

	/* Input elements in array */
	printf("Enter elements in array: ");
	for (j = 0;j < size;j++)
	{
		scanf_s("%d", &arr[j]);
	}

	evenCount = 0;
	oddCount = 0;

	for (j = 0;j < size;j++)
	{
		// If arr[j] is odd
		if (arr[j] & 1)
		{
			odd[oddCount] = arr[j];
			oddCount++;
		}
		else
		{
			even[evenCount] = arr[j];
			evenCount++;
		}
	}

	printf("\nElements of even array: \n");
	printArray(even, evenCount);

	printf("\nElements of odd array: \n");
	printArray(odd, oddCount);

	return 0;
}

/**
* Print the entire integer array
* @arr Integer array to be displayed or printed on screen
* @len Length of the array
*/

void printArray(int arr[], int len)
{
	int j;
	printf("Elements in the array: ");
	for (j = 0;j < len;j++)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
}