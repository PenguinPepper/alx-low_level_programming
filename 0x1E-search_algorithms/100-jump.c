#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int start = 0, end = sqrt(size), i, k;

	if (array == NULL)
		return (-1);
	while (array[end] <= value && end < size)
	{
		start = end;
		end += sqrt(size);
		if (end > size - 1)
			end = size;
		for (k = start; k < end; k++)
		{
			printf("Value Checked array[%d] = [%d]\n", k, array[k]);
		}
	}

	for (i = start; i < end; i++)
	{
		if (array[i] == value)
		{
			printf("Value found between indexs [%d] and [%d]\n", start, end);
			return (i);
		}

	}
	return (-1);
}
