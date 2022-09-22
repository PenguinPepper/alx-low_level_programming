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

	if (*(str + normchar) >= 97 && *(str + normchar) <= 122)
	{
		*(str + normchar) = *(str + normchar) - 32;
	}
	normchar++;
	while (*(str + normchar) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(str + normchar) == except[i])
			{
				if ((*(str + (normchar + 1)) >= 97) && (*(str + (normchar + 1)) <= 122))
				{
					*(str + (normchar + 1)) = *(str + (normchar + 1)) - 32;
					break;
				}
			}
		}
		normchar++;
	}
	return (str);
}
