// C Programming Code - Map enum to char array
#include <stdio.h>

enum status { one, two, three, four, five };

// Diziyi const char * olarak tanýmlama
const char* stats[] = { "1", "2", "3", "4", "5" };

#define NUMBER_OF_INPUTS (sizeof(stats)/sizeof(stats[0]))

int main()
{
	enum status;
	int name;

	printf("Number of Inputs is: %d\n", NUMBER_OF_INPUTS);
	for (name = one;name < NUMBER_OF_INPUTS;name++)
	{
		printf("\n%s", stats[name]);
	}

	printf("\n\n");

	printf("Sad Codings - C Programming Language Code Examples :)");
	return 0;
}


