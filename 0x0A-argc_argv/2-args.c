#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc:count of args present
 * @argv: array of char * pointing to args
 *
 *  Description: All arguments should be printed, including the first one
 *  Only print one argument per line, ending with a new line
 *  Return: if all goes well 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
