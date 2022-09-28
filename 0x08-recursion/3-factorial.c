#include "main.h"

/**
 * factorial - Function will return the factorial of a given number
 * @n: Number to be factored
 *
 * DDescription: Fucntion will returnthe factroial of a given number
 * if n is lower than 0, fucntion should return -1 to indicate an error
 * Return: factorial
 */
int factorial(int n)
{
	if ((n == 0) || (n == 1))
	{
		return (1);
	}
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
