// Program to Segregate 0s on Left Side & 1s on right side of the Array
#include <stdio.h>

void segregate0and1(int array[], int size)
{
	int left = 0, right = size - 1;

	while (left < right)
	{
		/* Increment left index while we see 0 at left */
		while (array[left] == 0 && left < right)
		{
			left++;
		}

		/* Decrement right index while we see 1 at right */
		while (array[right] == 1 && left < right)
		{
			right--;
		}

		/* If left is smaller than right then there is a 1 at left and a 0 at right. Exchange it */
		if (left < right)
		{
			array[left] = 0;
			array[right] = 1;
			left++;
			right--;
		}
	}
}

int main()
{
	int arr[] = { 1,0,0,1,1,0 };
	int array_size = 6, j = 0;

	segregate0and1(arr, array_size);
	printf("segregated array is ");
	for (j = 0;j < 6;j++)
	{
		printf("%d ", arr[j]);
	}
	getchar();

	return 0;
}