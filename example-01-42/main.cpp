// Program to Delete an element from the specified location from Array

#include <stdio.h>

int main()
{
	int arr[30], j, x, loc;

	printf("\nEnter no of elements :");
	scanf_s("%d", &j);

	//Read elements in an array
	printf("\nEnter %d elements :", j);
	for (x = 0;x < j;x++)
	{
		scanf_s("%d", &arr[x]);
	}

	// Read the location
	printf("\nlocation of the element to be deleted :");
	scanf_s("%d", &loc);

	/* loop for the deletion */
	while (loc < j)
	{

		arr[loc - 1] = arr[loc];
		loc++;
	}
	j--; // No of elements reduced by 1

	//Print Array
	for (x = 0;x < j;x++)
	{
		printf("\n %d", arr[x]);
	}
	return 0;
}