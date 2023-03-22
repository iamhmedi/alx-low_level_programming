#include "main.h"

/**
* main - the main function
* print_alphabet - alphabet functions
* more description
* Return: the return statement
*/

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
