// Program to Increment every Element of the Array by one & Print Incremented Array
#include <stdio.h>

void incrementArray(int[]);

int main()
{
	int j;
	int array[4] = { 10, 20, 30, 40 };

	incrementArray(array);
	for (j = 0;j < 4;j++)
	{
		printf("%d\t", array[j]); // Prints 2, 3, 4, 5
	}
	return 0;
}

void incrementArray(int arr[])
{
	int j;
	
	for (j = 0;j < 4;j++)
	{
		arr[j]++; // this alters values in array in main()
	}
}