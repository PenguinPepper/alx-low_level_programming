#include "main.h"

/**
 *
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
