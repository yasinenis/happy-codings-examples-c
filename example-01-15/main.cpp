// Program to Accept an Array & Swap Elements using Pointers
#include <stdio.h>

void swap34(float* ptr1, float* ptr2);

int main()
{
	float x[10];

	int j, n;

	printf("How many Elements...\n");

	scanf_s("%d", &n);

	printf("Enter Elements one by one\n");

	for (j = 0;j < n;j++)
	{
		scanf_s("%f", x + j);
	}

	/* Function call:Interchanging 3rd element by 4th */

	swap34(x + 2, x + 3);

	printf("\nResultant Array...\n");

	for (j = 0;j < n;j++)
	{
		printf("X[%d]=%f\n", j, x[j]);
	}
}

/* Function to swap the 3rd element with the 4th element in array */

void swap34(float* ptr1, float* ptr2)
{
	float temp;
	
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}