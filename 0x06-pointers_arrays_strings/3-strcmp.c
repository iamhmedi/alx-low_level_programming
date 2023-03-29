#include "main.h"

/**
* _strcmp - description
* @s1: description
* @s2: description
* @n: description
* Return: pointer
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
