// Put Even & Odd Elements of an Array in 2 Separate Arrays
#include <stdio.h>

int main()
{
	long int ARR[10], OAR[10], EAR[10];
	int x, j = 0, k = 0, n;

	printf("Enter the size of array AR \n");
	scanf_s("%d", &n);

	printf("Enter the elements of the array \n");
	for (x = 0;x < n;x++)
	{
		scanf_s("%ld", &ARR[x]);
		fflush(stdin);
	}

	/* Copy odd and even elements into their respective arrays */
	for (x = 0;x < n;x++)
	{
		if (ARR[x] % 2 == 0)
		{
			EAR[j] = ARR[x];
			j++;
		}
		else
		{
			OAR[k] = ARR[x];
			k++;
		}
	}

	printf("The elements of OAR are \n");
	for (x = 0;x < k;x++)
	{
		printf("%d\n", OAR[x]);
	}

	printf("The elements of EAR are \n");
	for (x = 0;x < j;x++)
	{
		printf("%dld\n", EAR[x]);
	}
}