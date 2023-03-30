#include "main.h"

/**
* print_number - description
* @n: description
*/

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
	{
		print_number(number / 10);
		_putchar((num % 10) + '0');
	}
}
