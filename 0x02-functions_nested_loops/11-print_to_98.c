#include <stdio.h>

/**
 * print_to_98 - print all natural numners from n to 98
 * @n: The only parameter
 *
 * Description: print all natural numbers from n to 98, follwed by new line
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
	while (n > 98)
	{
		printf("%d, ", n--);
		printf("%d\n", n);
	}
	}
	else
	{
	while (n < 98)
	{
		printf("%d, ", n++);
		printf("%d\n", n);
	}
	}
}
