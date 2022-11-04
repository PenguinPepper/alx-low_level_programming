#include "main.h"
#include <stdio.h>
int open_files(char *f_from, char *f_to);
int read_files(int from_fd, int to_fd, char *f_from, char *f_to);
int write_to_file(char *buff, int to_fd, int read_chars, char *f_to);

/**
 * main - control function to start copy file content to another file
 * @argc: count of arguments
 * @argv: An array of strings containing the arguments passed
 *
 * Return: If all goes well 0. Otherwise return exit status 97 and or 98.
 */
int main(int argc, char **argv)
{
	char *getfrom;
	char *copyto;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	getfrom = argv[1];
	copyto =  argv[2];

	open_files(getfrom, copyto);
	exit(0);
	return (0);
}

/**
 * open_files - opens file to be copied
 * @getfrom: Name of the file FILE_FROM.
 * @copyto: Name of the file FILE_TO.
 *
 * Return: if all goes well 0. in Case of failure exit status' 98 and 99
 */
int open_files(char *getfrom, char *copyto)
{
	int from_fd, to_fd;

	from_fd = open(getfrom, O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", getfrom);
		exit(98);
	}
	to_fd = open(copyto, O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (to_fd == -1)
	{
		to_fd = open(copyto, O_WRONLY | O_TRUNC);
		if (to_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", copyto);
			exit(99);
		}
	}
	read_files(from_fd, to_fd, getfrom, copyto);
	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
	return (0);
}

/**
 *  read_files - read file FROM_FILE
 *  @from_fd: file descriptor of file to be copied
 *  @to_fd:: file descriptor of file to be copied to
 *  @getfrom: name of file to be copied
 *  @copyto: name of file to be copied to
 *
 * Return: If all goes well 0. Otherwise exit status 98
 */
int read_files(int from_fd, int to_fd, char *getfrom, char *copyto)
{
	int read_chars;
	char buff[1024];

	read_chars = read(from_fd, buff, 1024);
	if (read_chars == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", getfrom);
		exit(98);
	}
	write_to_file(buff, to_fd, read_chars, copyto);
	while (read_chars != 0)
	{
		read_chars = read(from_fd, buff, 1024);
		if (read_chars == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", getfrom);
			exit(98);
		}
		if (read_chars == 0)
			return (0);
		write_to_file(buff, to_fd, read_chars, copyto);
	}
	return (0);
}

/**
 * write_to_file - write to file thats copied
 * @buff: array of characters
 * @to_fd: file descriptor of file to be copied to
 * @read_chars: integer showing number of characters to be read and written
 * @copyto: name of file to be copied to
 *
 * Return: if all goes well 0. Otherwise exit status 99
 */
int write_to_file(char *buff, int to_fd, int read_chars, char *copyto)
{
	int i;

	for (i = 0; i < read_chars; i++)
	{
		if (write(to_fd, &buff[i], 1) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", copyto);
			exit(99);
		}
	}
	return (0);
}
