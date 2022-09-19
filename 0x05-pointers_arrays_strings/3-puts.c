#include "main.h"

/**
 * _puts - print a string followed by a new line to stdout
 * @str: The string that is taken in as a parameter
 *
 * Return: If all goes well 0
 */
void _puts(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
