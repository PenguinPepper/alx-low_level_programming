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
	int a, b, c;

	a = 0;
	do {
		s1++;
		a++;
	} while (*s1 != '\0');
	b = 0;
	do {
		s2++;
		b++;
	} while (*s2 != '\0');
	if (a > b)
	{
		b = 3;
	}
	else if (a < b)
	{
		b = -3;
	}
	else
		b = 0;
	return (b);

}
