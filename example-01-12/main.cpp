// program count total duplicate elements in an array
#include <stdio.h>
int main()
{
	int array[100];
	int x, y, n, count = 0;

	/* Input size of the array */
	printf("Enter sizeo of the array : ");
	scanf_s("%d", &n);

	/* Input elements in the array */
	printf("Enter elements in array : ");
	for (x = 0;x < n;x++)
	{
		scanf_s("%d", &array[x]);
	} 

	/*
	* Find all duplicate elements in array
	*/

	for (x = 0;x < n;x++)
	{
		for (y = x + 1;y < n;y++)
		{
			/* If duplicate found then increment count by 1 */
			if (array[x] == array[y])
			{
				count++;
				break;
			}
		}
	}

	printf("\nTotal number of duplicate elements found in array = %d", count);

	return 0;
}