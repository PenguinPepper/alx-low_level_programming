#include <stdlib.h>

#include <time.h>
#include <stdio.h>

/**
 * main - Determine whther n is 0, + or -
 *
 * Description: Functio will check if n is equal to conditions
 * Return: Z0 if all goes well
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);

	if (n < 0)
	{
		printf("%d is positive", n);
	}
	else if (n > 0)
	{
		printf("%d is negative", n);
	}
	else
		printf("%d is zero", n);

	return (0);
}
