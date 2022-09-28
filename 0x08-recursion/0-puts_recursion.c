#include "main.h"

/**
 * _puts_recursion - function will print a string, followed by a new line
 * @s: String to be printed out or vairaible containg string
 *
 * Return: if all goes well 0
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
		_putchar(*(s + i));
	_putchar('\n');
}
