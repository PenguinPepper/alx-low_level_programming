#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitilised
 *
 * Return: if all goes well 0
 */
char *cap_string(char *str)
{
	int normchar = 0, i;
	int except[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + normchar) >= 97 && *(s + normchar) <= 122)
	{
		*(s + normchar) = *(s + normchar) - 32;
	}
	normchar++;
	while (*(s + normchar) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + normchar) == except[i])
			{
				if ((*(s + (normchar + 1)) >= 97) && (*(s + (normchar + 1)) <= 122))
				{
					*(s + (normchar + 1)) = *(s + (norchar + 1)) - 32;
					break;
				}
			}
		}
		normchar++;
	}
	return (s);
}
