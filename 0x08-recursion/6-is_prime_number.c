#include "main.h"

/**
 * are_you - checks if you(number) are prime
 * @n: the number to be checked
 * @i: second param
 *
 * Return: 1 for prime number otherwise 0
 */
int are_you(int n, int i)
{
	if ((n <= 1) || (n % i == 0 && i > 1))
		return (0);
	if ((n / i) < i)
		return (1);
	return (are_you(n, i + 1));
}


/**
 * is_prime_number - Retuens 1 if input is a prime number otherwise return 0
 * @n: inter ger to be checked if it is a prime number
 *
 * Return: 1 if primenumber else return 0 if not prime number
 */
int is_prime_number(int n)
{
	return (are_you(n, 1));
}
