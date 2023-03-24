#include "main.h"
#include <stdio.h>

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
		n *= -1;
		k = n;
		_putchar('-');
	}
	k /= 10;
	if (k != 0)
	{
		print_numbers(k);
	}
	_putchar((unsigned int) n % 10 + '0');
}
