#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string you want printed out
 *
 * Description: returns a pointer to a new string which is a duplicate of
 * the string str. Memory for the new string is obtained with malloc, and
 * can be freed with free. Returns NULL if insufficient memory was available.
 * Return: NULL if str = NULL. On success, the _strdup function
 * returns a pointer to the duplicated string. It returns NULL
 */
char *_strdup(char *str)
{
	int i, j = 0;
	char *hold;

	if (str == NULL || hold == NULL)
		return (NULL);
	while (str[j])
		i++;
	i++;
	hold = malloc(j * sizeof(char));
	for (i = 0; i <= j; i++)
		hold[i] = stri[i];
	return (hold);
}
