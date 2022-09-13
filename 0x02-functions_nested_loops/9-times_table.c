#include "main.h"

/**
 * time_table - print the 9 times table starting from 0
 *
 * Return: IF all goes well 0
 */
void times_table(void)
{
	int fl, sl, result;

	for (fl = 0; fl <= 9; fl++)
	{
	_putchar('0');
	for (sl = 1; sl <= 9; sl++)
	{
		_putchar(',');
		_putchar(' ');
		result = fl * sl;
		if (result <= 9)
		{
			_putchar(' ');
		}
		else
		{
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
	}
	_putchar('\n');
	}
}
