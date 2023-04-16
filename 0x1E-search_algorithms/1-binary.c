#include "search_algos.h"
#include <stddef.h>

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary seearch algorithm.
 * @array: pointer to the first eleent of the array to search in.
 * @size: the number of eleents in array.
 * @value: the value to search for.
 *
 * Return: the index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i, low_index = 0, high_index = size - 1;
	unsigned int mid;

	if (array == NULL || low_index > high_index)
		return (-1);
	while (low_index <= high_index)
	{
		mid = low_index + (high_index - low_index) / 2;

		printf("Searching in array: %d", array[low_index]);
		i = low_index + 1;
		while (i <= high_index)
		{
			printf(", %d", array[i]);
			i++;
		}
		printf("\n");

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			high_index = mid - 1;
		else
			low_index = mid + 1;
	}

	return (-1);
}
