#include "main.h"

/**
 * _isdigit - that checks for a digit
 * @c: The only argument
 *
 * Description: that checks for a digit (0 through 9).
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	return (0);
}
