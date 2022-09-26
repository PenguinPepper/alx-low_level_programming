#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: variable containg first string to be searched
 * @needle: variable containg string thats being searched for
 *
 * Description: function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (!needle[j])
		{
			return (&haystack[i]);
		}
	}
	return (0);
}
