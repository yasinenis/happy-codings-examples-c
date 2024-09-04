// Program to Find Largest Element in Array in C Programming
#include <stdio.h>
int main()
{
	int a[25], i, j, largest;

	printf("\nEnter no of elements :");
	scanf_s("%d", &j);

	// Read n elements in an array
	for (i = 0;i < j;i++)
	{
		scanf_s("%d", &a[i]);
	}

	//Consider first element as largest
	largest = a[0];

	for (i = 0;i < j;i++)
	{
		if (a[i] > largest)
		{
			largest = a[i];
		}
	}

	//Print out the Result
	printf("\nLargest Element : %d", largest);
	
	return 0;
}