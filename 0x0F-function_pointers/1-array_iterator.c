#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: array to be searched
 * @size: is the size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: if all goes well 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
