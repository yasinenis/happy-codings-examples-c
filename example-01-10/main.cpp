// C Programming Code - Arrays of strings
#include <stdio.h>
void main()
{
	char str[][40] = {
		"www.happycodings.com",
		"C Programming Code Examples" };

	int length1 = 0;	/* Length of first string */
	int length2 = 0;	/* Length of second string */

	/* find the length of the first string */
	while (str[0][length1] != '\0')
	{
		length1++;
	}
	/* find the length of the second string */
	while (str[1][length2] != '\0')
	{
		length2++;
	}

	/* Check that we have enough space for both strings */
	if (sizeof str[0] < length1 + length2 + 1)
	{
		printf("\nYou can't put a quart into a pint pot.");
	}
	else
	{
		/* Copy 2nd string to first */
		length2 = 0;
		while ((str[0][length1++] = str[1][length2++]) != '\0');

		printf("\n%s", str[0]);	/* Output combined string */
	}
}