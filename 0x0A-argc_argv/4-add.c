#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc:  count of args present
 * @argv: array of char * pointing to args
 *
 *  Description: Print the result, followed by a new line If no number
 *   is passed to the program, print 0, followed by a new line
 *   If one of the number contains symbols that are not digits, print Error
 *   followed by a new line, and return 1 numbers and the addition of all
 *   the numbers can be stored in an int
 *   Return: If all goes well 0
 */
int main(int argc, char *argv[])
{
	int n, j, k = 0;

	if (argc < 1)
		printf("0");
	for (n = 1; n < argc; n++)
	{
		k += atoi(argv[n]);
		for (j = 0; argv[n][j] != '\0'; j++)
		{
			if (!(isdigit(argv[n][j])))
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	printf("%d\n", k);
	return (0);
}
