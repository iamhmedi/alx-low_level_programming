#include <stdio.h>
#include "main.h"

/**
* _strlen - description
* @s: description
* Return: void
*/

size_t _strlen(const char *s)
{
	size_t length = 0;
	
	while(*s++)
	length++;
	return (length);
}
