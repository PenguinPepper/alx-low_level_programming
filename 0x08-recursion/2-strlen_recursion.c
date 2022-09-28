#include "main.h"

/**
 * _strlen_recursion - function will return the length of a string
 * @s: String to be counted
 *
 * Return: Length of string in integer form
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
		i++;
		return (i);
	}
	else
		return (0);
}
