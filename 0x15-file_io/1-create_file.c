#include "main.h"

/**
 * create_file - function that creates a file
 * @filename:  the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Description: The created file must have those permissions: rw-------
 * If file already exists the permissions do not change. If filename is
 * NULL return -1. If text_content is NULL create an empty file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, i;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
	}

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, , S_IRUSR | S_IWUSR);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
