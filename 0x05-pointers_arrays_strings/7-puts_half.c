#include "mai.h"

/**
 * puts_half - will print half of a string followed by new line
 * @str: String or variable containing the string
 *
 * Description: Function should print the second half of the string
 * If the number of characters is odd, should print the last n characters of
 * string, where n = (length_of_the_string - 1) / 2 .
 * Return: If all goes well 0
 */
void puts_half(char *str)
{
	int fir, sec;

	for (fir = 0; str[fir] != '\0'; ++fir)
		;
	for (sec = (fir + 1); sec < 1; ++sec)
	{
		_putchar(str[sec]);
	}
	_putchar('\n');
}
