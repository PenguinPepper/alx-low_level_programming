#include "main.h"

/**
 * print_square - hat prints a square, followed by a new line
 * @size: is the size of the square
 *
 * Description: prints a square, followed by a new line.
 * If size is 0 or less, the function should print only a new line.
 * Use the character # to print the square.
 * Return: if all goes well 0
 */
void print_square(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
