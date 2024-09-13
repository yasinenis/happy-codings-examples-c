// (KOD HATALI) Implementing arithmetic and array functions 
#include <stdio.h>

double add(double a, double b)
{
	return a + b;
}

double subtract(double a, double b)
{
	return a - b;
}

double multiply(double a, double b)
{
	return a * b;
}

double array_op(double array[], int size, double (*pfun)(double, double))
{
	// kontrol 2
	if (size <= 0) {
		printf("Array size is invalid\n");
		return 0; // Ya da uygun bir hata deðeri
	}

	double result = array[size - 1];
	int j = 0;

	// kontrol 1
	if (pfun == NULL) {
		printf("Function pointer is NULL\n");
		return 0; 
	}

	for (j = size - 1;j > 0;j--)
	{
		result = pfun(array[j - 1], result);
	}
	return result;
}

int main()
{
	double array[] = { 3.0,7.0,8.0,2.0,4.0,1.0,9.0,4.0,8.0,9.0,1.0 };
	int j = 0;
	int length = sizeof(array) / sizeof(double);
	printf("The value of:\n");
	for (j = 0;j < length;j++)
	{
		printf("%.2f%s\n", array[j]);
	}
	printf(" is %.2lf\n", array_op(array, length, add));

	printf("\nThe value of:\n");
	for (j = 0;j < length;j++)
	{
		printf("%.2lf%s\n", array[j]);
	}

	printf(" is %.2lf\n", array_op(array, length, subtract));

	printf("\nThe value of:\n");
	for (j = 0;j < length;j++)
	{
		printf("%.2lf%s\n", array[j]);
	}
	printf(" is %.2lf\n", array_op(array, length, subtract));

	printf("\nThe value of:\n");
	for (j = 0;j < length;j++)
	{
		printf("%.2lf%s\n", array[j]);
	}
	printf(" is %.2lf\n", array_op(array, length, multiply));

	return 0;
}