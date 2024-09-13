// Find element inside a two dimensional array
#include <stdio.h>

int main()
{
	int maps[5][2] = { {1,13},{2,23},{3,16},{4,8},{5,13} };
	int key;
	int j;

	printf("Enter the key: ");
	scanf_s("%d", &key);

	/* look it up in the table */
	for (j = 0;j < 5;j++)
	{
		if (key == maps[j][0])
		{
			printf("Key %d value pair to %d.\n",maps[j][1],key);
			break;
		}
	}


	/* report error if not found */
	if (j == 5)
	{
		printf("value not listed.\n");
	}
	return 0;
}