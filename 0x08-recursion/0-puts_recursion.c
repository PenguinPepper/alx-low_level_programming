#include "main.h"

/**
 * _puts_recursion - function will print a string, followed by a new line
 * @s: String to be printed out or vairaible containg string
 *
 * Return: if all goes well 0
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		return;
	}
	_putchar('\n');
}
