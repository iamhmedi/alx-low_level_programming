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

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
