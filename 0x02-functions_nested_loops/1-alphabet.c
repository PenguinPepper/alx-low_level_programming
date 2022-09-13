#include "main.h"

/**
 * print_alphabet - print letter ofthe alphabet
 *
 * Description: Print the alphabet in lowercase letter followed by a new line
 * Return: If all goes well 0
 */
void print_alphabet(void)
{
	char abet = 'a';

	do {
		_putchar(abet);
		abet++;
	} while (abet <= 'z');

	_putchar('\n');
}
