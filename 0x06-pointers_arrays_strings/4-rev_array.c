#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: name of array
 * @n: the number of elements of the array
 *
 * Return:null
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int decoy = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = decoy;
	}


	
}
