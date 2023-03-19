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
	int C, X, Z;

	for (C = '0'; C <= '9'; C++)
	{
		for (X = C + 1; X <= '9'; X++)
		{
			for (Z = X + 1; Z <= '9'; Z++)
			{
				if ((X != C) != Z)
				{
					putchar(C);
					putchar(X);
					putchar(Z);
					if (C == '7' && X == '8')
					continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
