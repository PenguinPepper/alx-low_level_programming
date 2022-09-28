#include "main.h"

/**
 * _print_rev_recursion - Function will print a string in reverse
 * @s: String to be reveresed or variable containing string
 *
 * Return: if all goes well 0
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
	{
		i = i + 1;
		return i;
	}
	
}
