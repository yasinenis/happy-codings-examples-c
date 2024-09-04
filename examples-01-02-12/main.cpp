// Find if a given Integer X appears more than N/2 times in a Sorted Array of N Integers
#include <stdio.h>

#define bool int

bool Morenooftimes(int array[], int n, int x)
{
	int j;
	int final_index = n % 2 ? n / 2 : (n / 2 + 1);

	for (j = 0;j < final_index;j++)
	{
		/* check if x is presents more than n/2 times */
		if (array[j] == x && array[j + n / 2] == x)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int array[] = { 10,13,13,16,18,15 };
	int n = sizeof(array) / sizeof(array[0]);
	int x = 15;
	if (Morenooftimes(array, n, x))
	{
		printf("The given no %d appears more than %d times in array[]", x, n / 2);
	}
	else
	{
		printf("The given no %d does not appear more than %d times in array[]", x, n / 2);
	}

	getchar();

	return 0;
}