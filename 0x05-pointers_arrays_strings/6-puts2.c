#include "main.h"

/**
 * puts2 - will print every character of string starting from the first
 * @str: String or variable containg string
 *
 * Description: Will print every other character of a string, starting with the
 * first character followed by new line.
 * Return :If all goes well 0
 */
void puts2(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
		index++;
	}
	_putchar('\n');
}
