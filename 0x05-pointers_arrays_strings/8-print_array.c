#include "main.h"
#include <stdio.h>

/**
 * print_array - will print n elements of an array of integers
 * @a: Name of array
 * @n: The number elements of the array to be printed
 *
 * Description: Function will print n elements of an array of integers
 * followed by a new line. Numbers will be seprated by a comma followed by a
 * space. The numbers will be dispayed in the same order they appear in array
 * Return: If all goes well 0
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf(("%d"), *(a + num));
		if (num != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
