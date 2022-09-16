#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 *
 * Description: draws a diagonal line on the terminal.
 * The diagonal should end with a \n.
 * If n is 0 or less, the function should only print a \n
 * Return: if all goes well 0
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
