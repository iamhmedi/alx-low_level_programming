#include "main.h"

/**
* print_number - print something
* @n: params
* Return: returns 0
*/

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar(45);
		k = -1;
	}
	if (n / 10)
	{
		print_number(k / 10);
	}
	_putchar(k % 10 + '0');
}
