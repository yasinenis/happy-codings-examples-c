// program to delete element from an array
#include <stdio.h>
#define maxsize 100

int main()
{
	int arr[maxsize];
	int j, size, pos;

	/* Input size and element in array */
	printf("Enter size of the array : ");
	scanf_s("%d", &size);
	printf("Enter elements in array : ");
	for (j = 0;j < size;j++)
	{
		scanf_s("%d", &arr[j]);
	}

	/* Input element position to delete */
	printf("Enter the element position to delete : ");
	scanf_s("d", &pos);

	/* If delete position is invalid */
	if (pos == size + 1 || pos < 0)
	{
		printf("Invalid position! Please enter position between 1 to %d", size);
	}
	else
	{
		/* Copy next element value to current element */
		for (j = pos - 1;j < size - 1;j++)
		{
			arr[j] = arr[j + 1];
		}

		/* Decrement array size by 1 */
		size--;
	}
}