#include "main.h"

/**
* _abs - check character case
* @n: parameter to be checked
* Return: 1 if is lower cas else 0
*/

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
