#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1 or variable containing first string
 * @s2: string 2 or variable containing second string
 * @n: number of bytes
 *
 * Description: If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire
 * string s2 if NULL is passed, treat it as an empty string.
 * Returned pointer shall point to a newly allocated space in memory
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, length1, length2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = 0;
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	if (n >= length2)
		n = length2;

	ptr = malloc(sizeof(char) * (length1 + n + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < length1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[length1 + j] = s2 [j];
	ptr[length1 + j] = '\0';
	if (ptr)
		return (ptr);
	return (NULL);

}
