#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: variable containing string or first string to be compared
 * @s2: variable containg string or sec string to be compared
 *
 * Description: works exaclty like strcmp function
 * Return: if all goes well o
 */
int _strcmp(char *s1, char *s2)
{
	int a, b;

	a = 0;
	b = 0;
	while (a == 0)
	{
		if ((*(s1 + b) == '\0') && (*(s2 + b) == '\0'))
		{
			break;
		}
		a = *(s1 + b) - *(s2 + b);
		b++;
	}
	return (a);

}
