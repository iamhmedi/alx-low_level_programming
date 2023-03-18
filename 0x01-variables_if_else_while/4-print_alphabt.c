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

	for (C = 'a'; C <= 'z'; C++)
	{
		if (C != 'e' && C != 'q')
		{
			putchar(C);
		}
	}
	putchar('\n');
	return (0);
}
