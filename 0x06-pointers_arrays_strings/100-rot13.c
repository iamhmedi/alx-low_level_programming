#include "main.h"
#include <stdio.h>

/**
* rot13 - description
* @n: description
* Return: pointer
*/

char *rot13(char *n)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == data[j])
			{
				n[i] = datarot[j];
				break;
			}
		}
	}
}
