#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: The string or variable cotaing string
 *
 * Return: If all goes well 0
 */
void print_rev(char *s)
{
	int length
	
	length = 0;
	while (*(s + length) != '\0')
	{
		length++;
	}
	length--;
	while (length >= 0)
	{
		_putchar(*(s + length));
		length--;
	}
	_putchar('\n');
}
