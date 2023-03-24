#include "main.h"

/**
* print_numbers - print something
* @n: params
* Return: returns 0
*/

void print_numbers(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar(45);
		k = -1;
	}
	if (k / 10)
	{
		print_numbers(k / 10);
	}
	_putchar(k % 10 + '0');
}
