#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: he name of the file to be read
 * @letters: the number of letters it should read and print
 *
 * Description: if write fails or does not write the expected
 * amount of bytes, return 0. If filename is NULL return 0. If
 * he file can not be opened or read, return 0.
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, i;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buffer);
		return (0);
	}
	r = read(o, buffer, letters);
	if (r == -1)
	{
		close(o);
		free(buffer);
		return (0);
	}
	for (i = 0; i < r; i++)
	{
		if (write(STDOUT_FILENO, &buffer[i], 1) == -1)
		{
			close(o);
			free(buffer);
			return (0);
		}
	}
	close(o);
	free(buffer);
	return(r);
}
