#include "main.h"

/**
 * _strncat - appends the src string to the dest string
 * @dest: the string or variable containing the string
 * @src: the sec argument containing the string or variable for string
 * @n: number of bytes to be used from src
 *
 * Description: appends the src string to the dest string
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
