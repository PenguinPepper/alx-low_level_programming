#include "main.h"

/**
 * time_table - print the 9 times table starting from 0
 *
 * Description: Prints the 9 tims tables, starting from 0 times.
 * This will be done 10 times in a row.
 * Return: IF all goes well 0
 */
void times_table(void)
{
	int fl, sl, mr;

	for (fl = 0; fl <= 9; fl++)
	{
	_putchar(48);
	for (sl = 1; sl <= 9; sl++)
	{
		mr = fl * sl;
		if (sl == 0)
		{
			_putchar(mr + '0');
		}
		else if (mr < 10 && fl != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(mr + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar((mr / 10) + 0);
			_putchar((mr % 10) + 0);
		}
	}
	_putchar('\n');
	}
}
