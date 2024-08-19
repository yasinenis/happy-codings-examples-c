// Calculate Sum of all Elements of an Array using Pointers as Arguments
#include <stdio.h>
void main()
{
	static int array[5] = { 10, 20, 30, 40, 50 };

	int sum;

	int addnum(int* ptr);

	sum = addnum(array);

	printf("Sum of all array elements = %5d\n", sum);
}

int addnum(int* ptr)
{
	int index, total = 0;

	for (index = 0;index < 5;index++)
	{
		total += *(ptr + index);
	}

	return(total);
}