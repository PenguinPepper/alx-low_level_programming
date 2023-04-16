#include "search_algos.h"

/**
 * linear_search - function that searches for a value in
 * an array of integers using the linear search algorithm
 * @array: pointer to first element of array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
	}
	return (-1);
}
