#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readpr;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	readpr = write(STDOUT_FILENO, buffer, read(fd, buffer, letters));

	close(fd);
	return (readpr);
}

