#include <stdio.h>
#include "main.h"

/**
* _strlen - description
* @str: description
* Return: void
*/

int _strlen(const char *str)
{
	size_t length = 0;
	
	while(*str++)
	length++;
	return (length);
}
