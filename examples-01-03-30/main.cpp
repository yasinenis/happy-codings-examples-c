// Print all the Repeated Numbers with Frequency in an Array
#include <stdio.h>
#include <malloc.h>

void duplicate(int array[], int j)
{
	int* count = (int*)calloc(sizeof(int), (j - 2));
	int x;

	printf("duplicate elements present in the given array are");
	for (x = 0;x < j;x++)
	{
		if (count[array[x]] == 1)
		{
			printf(" %d ", array[x]);
		}
		else
		{
			count[array[x]]++;
		}
	}
}

int main()
{
	int array[] = { 4,9,9,8,3,4,8 };
	int array_freq = sizeof(array) / sizeof(array[0]);
	
	duplicate(array, array_freq);
	getchar();
	return 0;
}