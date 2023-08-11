#include "main.h"
#include "_strlen.c"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int l;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (text_content != NULL)
		l = write(fd, text_content, _strlen(text_content));
	if (l == -1)
		return (-1);

	close(fd);
	return (1);
}
