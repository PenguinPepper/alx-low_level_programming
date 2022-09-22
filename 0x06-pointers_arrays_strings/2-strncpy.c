#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: variable containg first char argument
 * @src: variable containing sec argument or string variable
 * @n: third argumentto be given as number
 *
 * Description: copies a string and works exaclty like strncpy function
 * Return: IF all goes well 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
