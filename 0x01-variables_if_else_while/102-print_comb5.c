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

	for (C = 0; C <= 98; C++)
	{
		for (X = C + 1; X <= 99; X++)
		{
			putchar((C / 10) + '0');
			putchar((C % 10) + '0');
			putchar(' ');
			putchar((X / 10) + '0');
			putchar((X % 10) + '0');
			if (C == 98 && X == 99)
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
