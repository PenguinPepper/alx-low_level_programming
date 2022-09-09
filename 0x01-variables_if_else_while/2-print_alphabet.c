#include <stdlib.h>

#include <time.h>
#include <stdio.h>

/* more headers goes there */
/**
 * main - Print alphabet in low case
 *
 * Description: Print all the letter of alphabet in lower case
 * Return: If all goes well 0
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z' ; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
