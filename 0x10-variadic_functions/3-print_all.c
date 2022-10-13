#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function
 *
 * Return: if all goes well 0
 */
void print_all(const char * const format, ...)
{
	va_list inputs;
	char *coutp1, *coutp2;
	int i;

	va_start(inputs, format);
	i = 0;

	while (format != NULL && format[i])
	{
		coutp2 = "";
		if (format[i + 1])
			coutp2 = ", ";

		switch (format[i])
		{
			case 'i':
				printf("%i%s", va_arg(inputs, int), coutp2);
				break;
			case 'c':
				printf("%c%s", va_arg(inputs, int), coutp2);
				break;
			case 'f':
				printf("%f%s", va_arg(inputs, double), coutp2);
				break;
			case 's':
				coutp1 = va_arg(inputs, char *);
				if (coutp1 == NULL || coutp1[0] == '\0')
					coutp1 = "(nil)";
				printf("%s%s", coutp1, coutp2);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(inputs);
}
