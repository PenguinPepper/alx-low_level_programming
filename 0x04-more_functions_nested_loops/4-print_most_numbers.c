#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Description: rints the numbers, from 0 to 9, excluding 2 and 4
 * Return: 0 If all goes well
 */
void print_most_numbers(void)
{
	int mn;

	mn = 0;
	while (mn < 10)
	{
		if (mn != 2 && mn != 4)
		{
			_putchar(mn + '0');
		}
		mn++;
	}
	_putchar('\n');
}
