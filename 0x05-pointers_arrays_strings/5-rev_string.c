#include "main.h"

/**
 * rev_string - reverse a string
 * @s: Variable containg strng or string itself
 *
 * Return: If all goes well 0
 */
void rev_string(char *s)
{
	int fir, sec, thr, plholder;

	fir = 0;
	while (s[fir] != '\0')
	{
		fir++;
	}
	thr = 0;
	sec = fir - 1;
	while (thr < sec)
	{
		plholder = s[thr];
		s[thr] = s[sec];
		s[sec] = plholder;
		thr++;
		sec--;
	}
}
