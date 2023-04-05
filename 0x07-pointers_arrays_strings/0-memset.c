#include "main.h"

/**
* _memset - the function
* @s: desc
* @n: desc
* @b: desc
* Return: the return statement
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
