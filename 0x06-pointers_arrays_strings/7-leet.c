#include "main.h"

/**
 * leet - encodes a string into 1337
 * @one: string to be encoded
 *
 * Description: Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Return: if all goes well code
 */
char *leet(char *one)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j += 2)
		{
			char b[11] = "aAeEoOtTlL";

			char c[11] = "4433007711";

			if (b[j] == one[i])
			{
				one[i] = c[j];
			}
		}
	}
	return (one);
}
