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

	for (C = '0'; C <= '9'; C++)
	{
		putchar(C);
		putchar(', ');
	}
	putchar('\n');
	return (0);
}
