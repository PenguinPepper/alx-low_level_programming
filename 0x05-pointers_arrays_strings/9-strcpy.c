#include "main.h"

/**
 * _strcpy - copies the string pointed to by src param
 * @src: string value pointer
 * @dest: buffer pointer
 *
 * Description: Function will copy the string pointed to by src
 * including the terminating null byte \0 to thr buffer pointed to by dest
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int fir, sec;

	fir = 0;
	while (src[fir] != 0)
	{
		fir++;
	}
	for (sec = 0; sec <= fir; sec++)
	{
	dest[sec] = src[sec];
	}
	return (dest);
}
