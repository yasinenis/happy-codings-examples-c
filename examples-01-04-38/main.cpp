// Source Code to Calculate Average Using Arrays
#include <stdio.h>

int main()
{
	int n, j;
	float num[88], sum = 0.0, average;

	printf("Enter the numbers of elements: ");
	scanf_s("%d", &n);

	while (n > 88 || n <= 0)
	{
		printf("Error! number should in range of (1 to 88).\n");
		printf("Enter the number again: ");
		scanf_s("%d", &n);
	}

	for (j = 0;j < n;++j)
	{
		printf("%d. Enter number: ", j + 1);
		scanf_s("%f", &num[j]);
		sum += num[j];
	}

	average = sum / n;
	printf("Average = %.2f", average);

	return 0;
}