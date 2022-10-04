#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the 2D array
 * @height: The height of the 2D array
 *
 * Description: Each element of the grid should be initialized to 0.
 * The function should return NULL on failure.
 * If width or height is 0 or negative, return NULL
 * Return: 2D array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, size;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);
	if (p != NULL)
	{
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(sizeof(int) * width);
			if (p[i] != NULL)
			{
				for (size = 0; size < width; size++)
					p[i][size] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(p[i]);
					i--;
				}
				free(p);
				return (NULL);
			}
		}
		return (p);
	}
	return (NULL);
}
