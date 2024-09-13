// Program to Search an element in Array
#include <stdio.h>

int main()
{
	int a[30], ele, j, x;

	printf("\nEnter no of elements :");
	scanf_s("%d", &j);

	printf("\nEnter the values :");
	for (x = 0;x < j;x++)
	{
		scanf_s("%d", &a[x]);
	}

	// Read the element to be searched
	printf("\nEnter the elements to be searched :");
	scanf_s("%d", &ele);

	// Search starts from the zeroth location
	x = 0;
	while (x < j && ele != a[x])
	{
		x++;
	}

	// If x<j then Match found
	if (x < j)
	{
		printf("\nNumber found at the location = %d >:)\n", x + 1);
	}
	else
	{
		printf("\nNumber not found >:(\n");
	}
}