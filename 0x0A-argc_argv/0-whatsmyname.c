#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name, followed by a new line
 * @argc: count of args present
 * @argv: array of char * pointing to args
 *
 * Description: program that prints its name, followed by a new line
 * If you rename the program, it will print the new name, without having to
 * compile it again.You should not remove the path before the name of program.
 * Return: If all goes well zero
 */
int main(int argc, char *argv[])
{
	printf("s\n", argv[argc - 1]);
	return (0);
}
