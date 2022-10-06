#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the min number
 * @max: the max number
 *
 * Description: he array created should contain all the values from
 * min (included) to max (included), ordered from min to max
 * If min > max, return NULL If malloc fails, return NULL
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, k, range;
	int *ptr1;
	void *ptr2;

	if (min > max)
		return (NULL);
	range = max - min;
	ptr1 = malloc(sizeof(int) * (range + 1));
	if (ptr1 == NULL)
		return (NULL);
	ptr2 = ptr1;
	k = min
	for (i = 0; i <= range; i++)
	{
		ptr1[i] = k;
		k++;
	}
	return (ptr2);
}
