#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of the array
 *
 * Description: The memory is set to zero If nmemb or size is 0
 * then _calloc returns NULL. If malloc fails, then _calloc returns NULL
 * Return: pointer to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;
	void *plh;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	plh = ptr;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (plh);
}
