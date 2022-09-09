#include <stdio.h>

/**
 * main - print reverse alphabet
 *
 * Description: Print the lowercase alphabet in reverse
 * Return: If all goes well, 0
 */
int main(void)
{
	char alp;

	for (alp = 'z' ; alp >= 'a' ; alp--)
	{
	putchar(alp);
	}
	putchar('\n');
	return (0);
}
