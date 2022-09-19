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

	length = 0;
	while (*(str + length) != '\0')
	{
		_putchar(*str + length);
		length++;
	}
	_putchar('\n');
}
