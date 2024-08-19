// C Program to Compute the Sum of two One-Dimensional Arrays using Malloc
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
void main()
{
	int x, n;
	int* a, * b, * c;
	printf("How many Elements in each array...\n");
	scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	b = (int*)malloc(n * sizeof(int));
	c = (int*)malloc(n * sizeof(int));
	printf("Enter Elements of First List\n");
	for (x = 0;x < n;x++)
	{
		scanf_s("%d", a + x);
	}
	printf("Enter Elements of Second List\n");
	for (x = 0;x < n;x++)
	{
		scanf_s("%d", b + x);
	}
	for (x = 0;x < n;x++)
	{
		*(c + x) = *(a + x) + *(b + x);
	}
	printf("Resultant List is\n");
	for (x = 0;x < n;x++)
	{
		printf("%d\n", *(c + x));
	}
}