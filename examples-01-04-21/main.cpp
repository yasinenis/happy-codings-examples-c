// Passing array to function using call by value method
#include <stdio.h>

void disp(char ch)
{
	printf("%c ", ch);
}

int main()
{
	char arr[] = { 'w','x','r','s','e','f','t','y','i','j' };
	
	for (int x = 0;x < 10;x++)
	{
		/* I'm passing each element one by one using subscript */
		disp(arr[x]);
	}

	return 0;
}