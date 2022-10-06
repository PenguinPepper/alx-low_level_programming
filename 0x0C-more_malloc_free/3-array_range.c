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
	int i;
	int *ptr1;

	if (min > max)
		return (NULL);
	ptr1 = malloc(sizeof(int) * (max - min + 1));
	if (ptr1 == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr1[i] = min;
		min++;
		i++;
	}
	return (ptr1);
}
