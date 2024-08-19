// Allocate memory for int array
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* base;
	int y;
	int cnt = 0;
	int sum = 0;

	printf("how many integers you have to store\n");
	scanf_s("%d", &cnt);
	base = (int*)malloc(cnt * sizeof(int));
	printf("the base of allocation is %p \n", base);

	if (!base)
	{
		printf("unable to allocate size \n");
	}
	else
	{
		for (y = 0;y < cnt;y++)
		{
			*(base + y) = 5;
		}
	}
	sum = 0;

	for (y = 0;y < cnt;y++)
	{
		sum = sum + *(base + y);
	}
	printf("total sum is %d\n", sum);

	free(base);

	printf("addr of allocation is %p \n", base);
	base = (int*)malloc(cnt * sizeof(int));
	printf("the base of allocation is %p \n", base);
	base = (int*)malloc(cnt * sizeof(int));
	printf("the base of allocation is %p \n", base);
	base = (int*)calloc(10, 2);
	printf("the base of allocation is %p \n", base);
}