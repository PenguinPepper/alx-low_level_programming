#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: variable containing array
 * @size: the size of an array
 *
 * Return: If all goes well 0
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = a[i] + ((size * i) + 1);
	}
	for (j = 0; j < size; j++)
	{
		sum2 = a[i] + ((size * i) + 1);
	}
	printf("%i + %i\n", sum1, sum2);
}
