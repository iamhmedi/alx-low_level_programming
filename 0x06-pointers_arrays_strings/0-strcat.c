#include <stdio.h>
#include "main.h"

/**
* _strcat - description
* @dest: description
* @src: description
* Return: pointer
*/

char *_strcat(char *dest, char *src)
{
	int len = 0, j;
	
	while (dest[len])
	{
		len++;
	}

	for (j = 0; src[j] != 0; j++)
	{
		dest[len] = src[j];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
