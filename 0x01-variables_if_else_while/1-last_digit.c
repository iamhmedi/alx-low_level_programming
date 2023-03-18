#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - the main function
* more description
* Return: the return statement
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
	{
		printf("%d is positive\n", n);
		printf("Last digit of %n is %n and is greater than 5", n, n%10);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n % 10 == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
