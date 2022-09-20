#include "main.h"

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
	int fir, sec, mid;

	sec = 0;
	while (str[sec] != '\0')
	{
		sec++;
	}
	if (sec % 2 == 0)
	{
		mid = sec / 2;
		for (fir = mid; fir < sec; fir++)
		{
			_putchar(str[fir]);
		}
	}
	else
	{
		mid = (sec - 1) / 2;
		for (fir = mid + 1; fir < sec; fir++)
		{
			_putchar(str[fir]);
		}
	}
	_putchar('\n');
}
