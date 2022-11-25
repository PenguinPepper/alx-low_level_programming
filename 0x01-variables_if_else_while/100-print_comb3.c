#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: if all goes well 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (j == i || j < i)
				continue;
			if (j > 49 && j <= 57)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i);
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
