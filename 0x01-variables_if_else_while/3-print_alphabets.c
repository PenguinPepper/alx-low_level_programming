#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Show combo of lower case and upper case
 *
 * Description: Function will print the alphabet in lower and upper case
 * Return: If all goes well, 0
 */
int main(void)
{
	char alp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		putchar(alp);
	}
	for (alp = 'A' ; alp <= 'Z' ; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
