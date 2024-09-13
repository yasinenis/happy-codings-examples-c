// Split an Array from Specified Position & Add First Part to the End
#include <stdio.h>

void main()
{
	int number[50];
	int x, n, a, j;

	printf("Enter the value of n\n");
	scanf_s("%d", &n);

	printf("enter the numbers\n");
	for (x = 0;x < n;++x)
	{
		scanf_s("%d", &number[x]);
	}

	printf("Enter the position of the element to split the array \n");
	scanf_s("%d", &a);
	for (x = 0;x < a;++x)
	{
		number[n] = number[0];
		for (j = 0;j < n;++j)
		{
			number[j] = number[j + 1];
		}
	}

	printf("The resultant array is\n");
	for (x = 0;x < n;++x)
	{
		printf("%d\n", number[x]);
	}
}