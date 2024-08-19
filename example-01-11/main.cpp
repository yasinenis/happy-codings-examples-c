// Average the items in a 5 element array
#include <stdio.h>
int main()
{
	float arr[5];
	float total;
	float average;

	arr[0] = 8.0;
	arr[1] = 4.0;
	arr[2] = 9.0;
	arr[3] = 3.0;
	arr[4] = 5.0;

	total = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
	average = total / 5.0;
	printf("Total %f Average %f\n", total, average);
	return (0);
}