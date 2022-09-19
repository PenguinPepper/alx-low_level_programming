#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: The first parameter being hte first integer
 * @b: The second parameter being the secnd integer
 *
 * Return: If all goes well 0
 */
void swap_int(int *a, int *b)
{
	/*third integer value*/
	int tv;

	tv = *a;
	*a = *b;
	*b = tv;
}
