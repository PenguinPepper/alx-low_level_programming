#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: if all goes well 0
 */
void print_numbers(void)
{
	int p;

	p = 0;
	while (p < 10)
	{
		_putchar(p + '0');
		p++;
	}
	_putchar('\n');
}
