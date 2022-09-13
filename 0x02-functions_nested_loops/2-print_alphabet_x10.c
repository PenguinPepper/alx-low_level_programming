#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Description: Print the letters of the alphabet 10 times in lower case
 * Return: If all goes well 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1 ; i <= 10 ; i++)
	{
	char abet = 'a';

	do {
		_putchar(abet);
		abet++;
	} while (abet <= 'z');
	}

	_putchar('\n');
}
