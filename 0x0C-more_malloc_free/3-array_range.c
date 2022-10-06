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
	int i, j, range = max - min;
	int *ptr1 = malloc(sizeof(int) * (range + 1));

	if (min > max)
		return (NULL);
	range = max - min;
	if (!ptr1)
		return (NULL);
	j = min
	for (i = 0; i <= range; i++)
	{
		ptr[i] = j;
		j++;
	}
	return (ptr);
}
