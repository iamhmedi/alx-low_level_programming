#include "main.h"

/**
* _strcat - description
* @dest: description
* @src: description
* @n: description
* Return: pointer
*/

char *_strcat(char *dest, char *src, int n)
{
	int j = 0, len = 0;

	while (dest[index++])
	{
		len++;
	}

	for (j = 0; src[j] && j < n; j++)
	{
		dest[len++] = src[j];
	}
	return (dest);
}
