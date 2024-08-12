#include "main.h"

/**
 * read_textfile -  function that reads a text file
 * and prints it to the POSIX standard output.
 *
 * @filename: pointer to the targeted file.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t bytes;

	if (!filename || !letters)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
		close;
	}

	bytes = read(filename, buffer, letters);
	bytes = write(STDOUT_FILENO, buffer, bytes);
	if (bytes == -1)
	{
		return (0);
		close(fd);
		free(buffer);
	}

	return (bytes);
}
