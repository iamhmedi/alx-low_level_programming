#include "main.h"

/**
* print_alphabet - print alphabets
*/

void print_alphabet_x10(void)
{
	char alpha;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	}
	_putchar('\n');
}
