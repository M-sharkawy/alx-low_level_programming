#include "main.h"

/**
 * error_usage - number of argument is not the correct one
 *
 * Return: nothing
*/

void error_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error_read - if you can not read file
 * @filename: name of the file that cannot be read
 * return: nothing
*/

void error_read(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
	exit(98);
}

/**
 * error_write - if you can not write in the file
 * @filename: name of the file that cannot be written to
 * return: nothing
*/

void error_write(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
	exit(99);
}

/**
 * error_close - if you can not close the file
 * @fd: file descriptor that cannot be closed
 * return: nothing
*/

void error_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
	exit(100);
}

/**
 * main - copy one file to another
 *
 * @argc: The arguments number.
 * @argv: The arguments as string.
 *
 * Return: always o
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wr;
	char buffer[1024];

	if (argc != 3)
		error_usage();

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_read(argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_write(argv[2]);

	while ((rd = read(file_from, buffer, 1024)) > 0)
	{
		wr = write(file_to, buffer, rd);
		if (wr == -1)
			error_write(argv[2]);
	}

	if (rd == -1)
		error_read(argv[1]);
	}

	if (close(file_from) == -1)
		error_close(file_from);

	if (close(file_to) == -1)
		error_close(file_to);

	return (0);
}
