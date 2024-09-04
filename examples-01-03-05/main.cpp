// Program to identify missing Numbers in a given Array
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, x, j, c, t, b;

	printf("Enter size of array :");
	scanf_s("%d", &n);

	int* array = (int*)malloc((n - 1) * sizeof(int));
	if (array == NULL)
	{
		printf(" Memory allocation failed\n");
		return 1;
	}
	
	printf("Enter elements into array : \n");
	for (x = 0;x < n - 1;x++)
	{
		scanf_s("%d", &array[x]);
	}

	b = array[0];

	for (x = 1;x < n - 1;x++)
	{
		b = b ^ array[x];
	}

	for (x = 2, c = 1;x <= n;x++)
	{
		c = c ^ x;
	}

	c = c ^ b;

	printf("Missing element is : %d \n", c);
}