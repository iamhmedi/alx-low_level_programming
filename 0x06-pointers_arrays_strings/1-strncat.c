#include "main.h"

/**
* _strncat - description
* @dest: description
* @src: description
* @n: description
* Return: pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int j = 0, len = 0;
	
	while (dest[j++])
	{
		len++;
	}

	for (j = 0; src[j] && j < n; j++)
	{
		dest[len++] = src[j];
	}
	return (dest);
}
