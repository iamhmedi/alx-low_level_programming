#include "main.h"

/**
* print_alphabet - print alphabets
*/

void print_alphabet(void)
{
	char alpha;

	for (int count = 0; count <= 9; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	}
	_putchar('\n');
}
