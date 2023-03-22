#include "main.h"

/**
* _isalpha - check character case
* @c: parameter to be checked
* Return: 1 if is lower cas else 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
