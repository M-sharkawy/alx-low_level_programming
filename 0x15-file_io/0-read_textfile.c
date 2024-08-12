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
	ssize_t rd;
	ssize_t w;

	if (!filename || !letters)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			free(buffer);
			return (0);
		}

	rd = read(filename, buffer, letters);
	w = write(STDOUT_FILENO, buffer, rd);
	if (w == -1 || rd == -1 || w != rd)
	{
		free(buffer);
		return (0);
	}

	return (w);
}
