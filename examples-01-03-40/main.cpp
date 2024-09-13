// Read integers into an array and Reversing them using Pointers
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 30

int main()
{
	int size, j, arr[MAX];
	int* ptr;
	system("cls");

	ptr = &arr[0];

	printf("\nEnter the size of array :");
	scanf_s("%d", &size);

	printf("\nEnter %d integers into array: ", size);
	for (j = 0;j < size;j++)
	{
		scanf_s("%d", ptr);
		ptr++;
	}

	ptr = &arr[size - 1];

	printf("\nElements of array in reverse order are :");
	for (j = size - 1;j >= 0;j--)
	{
		printf("\nElement%d is %d : ", j, *ptr);
		ptr--;
	}

	getchar();


}