#include "main.h"

/**
 * _islower - check for lower case characters
 * @c: The only agrument
 *
 * Return: 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
	return (1);
	}
	else
	return (0);
}
