// C Program to Implement Stack Operations Using Array
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define size 5

struct stack
{
	int s[size];
	int top;
}st;

int stfull()
{
	if (st.top >= size - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void push(int item)
{
	st.top++;
	st.s[st.top] = item;
}

int stempty()
{
	if (st.top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int pop()
{
	int item;
	item = st.s[st.top];
	st.top--;
	return(item);
}

void display()
{
	int i;

	if (stempty())
	{
		printf("\nStack Is Empty!");
	}
	else
	{
		for (i = st.top;i >= 0;i--)
		{
			printf("\n%d", st.s[i]);
		}
	}
}

int main()
{
	int item, choice;
	char ans;
	st.top = -1;

	printf("\n\tImplementation Of Stack");
	do {
		printf("\nMain Menu");
		printf("\n1.Push \n2.Pop \n3.Display \n4.exit");

		printf("\nEnter Your Choice");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\nEnter The item to be pushed");
			scanf_s("%d", &item);

			if (stfull())
			{
				printf("\nStack is Full!");
			}
			else
			{
				push(item);
			}

			break;
		case 2:
			if (stempty())
			{
				printf("\nEmtpy stack!Underflow !!");
			}
			else
			{
				item = pop();
				printf("\nThe popped elements is %d", item);
			}
			break;

		case 3:
			display();
			break;
		case 4:
			exit(0);
		}
		printf("\nDo You want To Continue?");
		ans = getchar();
	} while (ans == 'Y' || ans == 'y');
	return 0;
}