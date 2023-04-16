#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted
 * array using the jump search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 *
 * Return: first index where value is located.
 */
int jump_search(int *array, size_t size, int value)
{

