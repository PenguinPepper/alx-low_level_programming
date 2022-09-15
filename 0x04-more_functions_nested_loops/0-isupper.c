#include "main.h"

/**
 * _isupper - chech for upper case character
 * @c: character argument
 *
 * Description: Function will check if charcter is uppercase
 * Return: 1 if c is uppercase other wise return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
