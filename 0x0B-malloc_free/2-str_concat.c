#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: variable containing the first string or the string itself
 * @s2: variable containing the second string or the string itself
 *
 * DEscription: The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1 followed by the contents of s2,
 * and null terminated. If NULL is passed, treat it as an empty string
 * Return: return NULL on failure. On success pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, leng1 = 0, leng2 = 0, leng3;
	char *hold;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (hold == NULL)
		return (NULL);

	while (s1[leng1])
		leng1++;
	while (s2[leng2])
		leng2++;
	leng3 = leng1 + leng2;

	hold = malloc(sizeof(char) * leng3 + 1);
	while (i < leng1)
	{
		hold[i] = s1[i];
		i++;
	}
	while (i <= leng3)
	{
		hold[i] = s2[j];
		i++;
		j++;
	}
	return (hold);
}
