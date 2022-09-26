#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: Unknown bytes to be copied
 * @src: First ememory area
 * @dest: Second memory area
 *
 * Description: Copies n bytes from memory area src to memory area dest
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
