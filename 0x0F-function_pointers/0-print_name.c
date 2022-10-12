#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: a function pointer that returns void
 *
 * Return: if all goes well 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
