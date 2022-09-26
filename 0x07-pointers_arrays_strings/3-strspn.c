#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: Variable containg string
 * @accept: string containg number of bytes searched for
 *
 * Return:  number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int search, i, j;
	int bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		search = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				search = 1;
				bytes++;
			}
		}
		if (search == 0)
		{
			return (bytes);
		}
	}
	return (0);
}
