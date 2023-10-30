#include "main.h"
#include <stddef.h>

/**
 * append_text_to_file - function that append text at the
 * end.
 * @filename: file name.
 * @text_content: Null terminating string to add the end of the
 * file.
 *
 * Return: 1 and -1;
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		if (write(fd, text_content, len) != len)
			return (-1);
	}
	close(fd);
	return (1);
}
