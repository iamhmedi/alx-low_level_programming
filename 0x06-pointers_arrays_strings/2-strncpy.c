#include "main.h"

/**
* _strncpy - description
* @dest: description
* @src: description
* @n: description
* Return: pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0, len = 0;

	while (dest[j++])
	{
		len++;
	}

	for (j = 0; src[j] && j < n; j++)
	{
		dest[j] = src[j];
	}

	for (j = len; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
