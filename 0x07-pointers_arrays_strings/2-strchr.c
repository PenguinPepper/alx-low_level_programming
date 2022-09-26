#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: Variable containing string or string
 * @c: Character to be located in string
 *
 * Return: Pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
