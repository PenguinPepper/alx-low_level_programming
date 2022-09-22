#include "main.h"

/**
 * _strcat - append the src string to the dest string
 * @dest: the string or variable containg the string
 * @src: the sec argument containing the string or variable for string
 *
 * Description: This function appends the src string to the dest string
 * overwriting the terminating null byte '\0' at the end of dest
 * and then adds a terminating null byte.
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
