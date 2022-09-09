#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: Writes all single base digit numbers excluding 10
 * Return: If all goes well, 0
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
