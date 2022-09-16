#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: Only argument
 *
 * Return: o is all goes well
 */
void print_triangle(int size)
{
	int space, a, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < size; a++)
	{
		space = size - a;
		for (b = 1; b <= size; b++)
		{
			if (b < space)
			{
			_putchar(' ');
			}
			else
			{
			_putchar('#');
			}
		}
		_putchar('\n');
	}
}
