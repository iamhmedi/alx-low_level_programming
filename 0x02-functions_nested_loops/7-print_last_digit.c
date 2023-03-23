#include "main.h"

/**
* print_last_digit - check character case
* @n: parameter to be checked
* Return: 1 if is lower cas else 0
*/

int print_last_digit(int n)
{
  int last;
  
  last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
  _putchar(last + '0');
	return (last);
}
