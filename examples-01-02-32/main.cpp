// Find the Number of Elements in an Array
#include <stdio.h>
#include <stdlib.h>

#ifdef __linux__
#include <unistd.h>
#endif

int main()
{
	int array[] = { 13,53,36,23,18,88,100 };
	int n;
	n = sizeof(array);

	printf("Size of the given array is %d\n", n / sizeof(int));

	return 0;
}