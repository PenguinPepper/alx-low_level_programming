#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the special character you want to be the beginning of the array
 *
 * Description: Function creates an array of chars,
 * and initializes it with a specific char Returns NULL if size = 0
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
		return (NULL);
	else
	{
		while (str[i] == '\0')
		{
			str[i] = c;
			i++;
		}
		return (str);
	}
}
