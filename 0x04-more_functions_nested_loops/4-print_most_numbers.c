#include "main.h"

/**
 *
 */
void print_most_numbers(void)
{
	int mn;

	mn = 0;
	while (a < 10)
	{
		if (mn != 2 && mn != 4)
		{
			_putchar(mn + '0');
		}
		a++;
	}
	_putchar('\n');
}
