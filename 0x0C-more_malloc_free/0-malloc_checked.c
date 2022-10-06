#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the dataype to be reserved
 *
 * Descriptio: if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
