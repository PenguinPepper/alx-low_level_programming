#include "main.h"
/**
 *
 */
void print_diagonal(int n)
{
	int pd, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (pd = 0; pd < n; pd++)
		{
			for (s = 0; s < pd; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
