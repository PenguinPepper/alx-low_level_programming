#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - dont print q and e
 *
 * Description: Print all letters as long as its not q or e
 * Return: If all goes well, 0
 */
int main(void)
{
	char alp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		if (alp == 'q' || alp == 'e')
		{
		}
		else
		{
			putchar(alp);
		}
	}
	putchar('\n');
	return (0);
}
