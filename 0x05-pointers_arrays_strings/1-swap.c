#include <stdio.h>
#include "main.h"

/**
* swap_int - description
* @a: int pointer
* @b: int pointer
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
