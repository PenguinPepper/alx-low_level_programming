#include <stdio.h>

/**
 * main - print all possible combinations of single numbers
 *
 * Description: Show all possible combinations of single digit numbers
 * Return: If all goes well, o
 */
int main(void)
{
	int combo;

	for (combo = '0' ; combo <= '9' ; combo++)
	{
		putchar(combo);
		if (combo != '9')
		{
		putchar(' ');
		putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
