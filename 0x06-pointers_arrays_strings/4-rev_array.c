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
	int i = 0, decoy;

	n = n - 1;
	while (i < n)
	{
		decoy = a[i];
		a[i++] = a[n--];
		a[n--] = decoy;
	}
}
