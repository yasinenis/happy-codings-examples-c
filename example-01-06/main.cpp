// an example of using an array for two tasks
#include <stdio.h>
int main()
{
	int temps[31];
	int x, total;
	float average, celsius;
	total = 0.0;

	for (x = 0;x < 31;x++)
	{
		printf("enter temperature #%d:", x);
		scanf_s("%d", &temps[x]);
	}
	for (x = 0;x < 31;x++)
	{
		total += temps[x];
	}

	average = total / 31.0;
	printf("average is:%f\n\n", average);
	puts("fahrenheit \t celsius\n");

	for (x = 0;x < 31;x++)
	{
		celsius = (5.0 / 9.0) * (temps[x] - 32);
		printf("%d\t\t%6.2f\n", temps[x], celsius);
	}
}