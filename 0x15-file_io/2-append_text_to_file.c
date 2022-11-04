#include "main.h"

/**
 * append_text_to_file - unction that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Description: is NULL, do not add anything to the file. Return 1 if the file
 * exists and -1 if the file does not exist or if required permission is not
 * gavailable. Do not create the file if it does not exist.
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	o = open(filename, O_APPEND | O_RDWR);
	if (o == -1)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
		if (write(o, &text_content[i], 1) == -1)
		{
			close(o);
			return (-1);
		}
	}
	close(o);
	return (1);
}
