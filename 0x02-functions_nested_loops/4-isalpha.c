#include "main.h"

/**
 * _isalpha - check ifargument is a character of alphabet
 * @c: The only argument
 *
 * Return: If c is a leter of alphabet regradless of case then 1 otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
