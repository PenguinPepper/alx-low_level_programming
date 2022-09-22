#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: name of array
 * @n: the number of elements of the array
 *
 * Return: if all goes well zero
 */
void reverse_array(int *a, int n)
{
	int i = 0, decoy, *count, j;

	count = a;
	for (j = 1; j < n; j++)
	{
		count++;
	}
	while (i < j / 2)
	{
		i++;
		decoy = a[i];
		a[i] = *count;
		*count = decoy;
		count--;
	}


	
}
