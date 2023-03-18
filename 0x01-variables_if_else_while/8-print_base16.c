#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - the main function
* more description
* Return: the return statement
*/

int main(void)
{
	char C;
	char x;

	for (C = '0'; C <= '9'; C++)
	{
		putchar(C);
	}
	for (x = 'a'; x = 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
