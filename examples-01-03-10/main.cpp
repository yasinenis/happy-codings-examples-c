// Input a String & Store their Ascii Values in an Integer Array & Print the Array
#include <stdio.h>

int main()
{
	char string[50];
	int n, count = 0;

	printf("Enter the no of characters present in an array \n");
	scanf_s("%d", &n);

	printf(" Enter the string of %d characters \n", n);
	scanf_s("%s", string, (unsigned int)sizeof(string));

	while (count < n)
	{
		printf(" %c = %d\n", string[count], string[count]);
		++count;
	}
	return 0;
}