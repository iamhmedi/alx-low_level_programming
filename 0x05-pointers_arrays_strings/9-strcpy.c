#include <stdio.h>
#include "main.h"

/**
* _strcpy - description
* @dest: description
* @src: description
* Return: pointer
*/

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j++] = '\0';
	return (dest);
}
