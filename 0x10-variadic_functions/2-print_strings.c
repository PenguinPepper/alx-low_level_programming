#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n:  the number of strings passed to the function
 *
 * Description: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 * Return: if all goes well 0;
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringopt;
	unsigned int i;
	char *string;

	va_starts(stringopt, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(stringopt, char *);
		if (string == NULL)
			str = "(nil)";
		else
			printf("%s", string);
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	va_end(stringopt);
	printf("\n");
}
