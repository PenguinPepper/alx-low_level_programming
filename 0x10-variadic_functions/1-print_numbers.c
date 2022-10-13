#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 *
 * Description: If separator is NULL, don’t print it
 * Return: If all goes well 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for(i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int);
		if (seperator && i != n -1)
		printf"%s", seperator);
	}

	va_end(nums);
	printf("\n");
}
