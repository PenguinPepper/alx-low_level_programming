#include "main.h"

/**
 * squared - function will return the sqared value of number
 * @x: number to be multipled y number of times
 * @y: number to raise to the power of
 *
 * Return: x to power of y
 */
int squared(int x, int y)
{
	int pow = y * y;

	if (pow > x)
		return (-1);
	if (pow == x)
		return (y);
	return (squared(x, y + 1));
}


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
	return (squared(n, 1));
}
