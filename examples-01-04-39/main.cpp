// Store value into two dimensional char array and output it
#include <stdio.h>

int main()
{
	char text[10][88];
	int j;

	for (j = 0;j < 10;j++)
	{
		printf("some string for index %d: ", j + 1);

		fgets(text[j], sizeof(text[j]), stdin);
	}

	do
	{
		printf("Enter number of string (1-10) : ");
		scanf_s("%d", &j);
		j--; /* adjust value to match array index */
		if (j > 0 && j < 10)
		{
			printf("%s\n", text[j]);
		}
	} while (j >= 0);

	return 0;
}