// Passing array to function using call by reference
#include <stdio.h>

void disp(int* num)
{
	printf("%d ", *num);
}

int main()
{
	int arr[] = { 3,4,8,1,2,6,5,8,9,0 };

	for (int j = 0;j < 10;j++)
	{
		/* Passing addresses of array elements */
		disp(&arr[j]);
	}
	return 0;
}