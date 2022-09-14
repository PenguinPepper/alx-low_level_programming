#include <stdio.h>

/**
 * print_to_98 - print all natural numners from n to 98
 * @n: The only parameter
 *
 * Description: print all natural numbers from n to 98, follwed by new line
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

	for (i = n; i >= 98; i--)
	{
		printf("%d, ");
		if (i != 98)
		{
		printf(", ");
		}
	}
	}
	else
	{
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
		printf(", ");
		}
	}
	}
	printf("\n");
}
