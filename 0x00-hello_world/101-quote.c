#include <stdio.h>
#include <unistd.h>

/**
 * main - prints quote followed by a new line
 *
 * Return: will return 1
 */
int main(void)
{
	write(STDERR_FILENO,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\x0A", 59);
	return (1);
}
