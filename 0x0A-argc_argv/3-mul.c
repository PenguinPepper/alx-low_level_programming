#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: count of args present
 * @argv: array of char * pointing to args
 *
 * Description: print the result of the multiplication, followed by a new line
 *  two numbers and result of the multiplication can be stored in an integer
 *  If the program does not receive two arguments, your program
 *  should print Error, followed by a new line, and return 1
 *  Return: if all goes well 0
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
