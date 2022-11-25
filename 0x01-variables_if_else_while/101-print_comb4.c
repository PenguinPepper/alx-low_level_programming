#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Description: The three digits must be different
 * Print only the smallest combination of three digits
 * Numbers are printed in ascending order, with three digits
 * Return: if all goes well 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)

	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if ((k == i || j == k) || (i > k || j > k))
					continue;
				if (j < i || j == i)
					continue;
				if (k > 50)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i);
				putchar(j);
				putchar(k);
			}
		}
	}
	putchar('\n');
	return (0);
}
