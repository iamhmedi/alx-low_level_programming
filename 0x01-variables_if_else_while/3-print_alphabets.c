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
	char X;

	for (C = 'a'; C <= 'z'; C++)
	{
		putchar(C);
	}
	for (X = 'A'; X <= 'Z'; X++)
	{
		putchar(X);
	}
	putchar('\n');
	return (0);
}
