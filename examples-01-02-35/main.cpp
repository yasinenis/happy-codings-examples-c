// Program to Find the Second Largest & Smallest Elements in an Array
#include <stdio.h>

int main()
{
	int number[50];
	int x, j, a, n, counter, average;

	printf("Enter the value of N\n");
	scanf_s("%d", &n);

	printf("Enter the numbers \n");
	for (x = 0;x < n;++x)
	{
		scanf_s("%d", &number[x]);
	}

	for (x = 0;x < n;++x)
	{
		for (j = x+1; j< n;++j)
		{
			if (number[x] < number[j])
			{
				a = number[x];
				number[x] = number[j];
				number[j] = a;
			}
		}
	}

	printf("The numbers arranged in descending order are given below\n");
	for (x = 0;x < n;++x)
	{
		printf("%d\n", number[x]);
	}

	printf("The 2nd largest number is =%d\n", number[1]);
	printf("The 2nd smallest number is =%d\n", number[n - 2]);

	average = (number[1] + number[n - 2]) / 2;
	counter = 0;
	for (x = 0;x < n;++x)
	{
		if (average == number[x])
		{
			++counter;
		}
	}

	if (counter == 0)
	{
		printf("The average of %d and %d is = %d is not in the array \n", number[1], number[n - 2], average);
	}
	else
	{
		printf("The average of %d and %d in array is %d in numbers \n", number[1], number[n - 2], counter);
	}
	return 0;
}