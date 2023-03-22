#include "main.h"

/**
* _islower - check character case
* @c: parameter to be checked
* Return: 1 if is lower cas else 0
*/

int islower(int c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  else
    return (0);
}
