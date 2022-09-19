#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: The stirng or variable containing the string
 *
 * Return: If all goes well length of string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
	{
		length = length + 1;
	}
	return (length);
}
