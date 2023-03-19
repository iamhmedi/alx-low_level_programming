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
	int C, X;

	for (C = '0'; C <= '9'; C++)
	{
		for (X = C + 1; X <= '9'; X++)
		{
			if (X != C)
			{
				putchar(C);
				putchar(X);
				if (C == '8' && X == '9')
				continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
