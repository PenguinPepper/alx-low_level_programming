#include "main.h"

/**
 * _sqrt_recursion - will return the natural square root of a number
 * @n: number to be square rooted
 *
 * Description: returns the natural square root of a number. If n
 * does not have a natural square root, the function should return -1
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	return (_pow_recursion(n, 1));
}
