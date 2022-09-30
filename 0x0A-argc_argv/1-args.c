#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: count of args present
 * @argv: array of char * pointing to args
 *
 * Return: if all goes well 0
 */
int main(int argc, char *argv[])
{
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}
