#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename: name of file to create
 * @text_content: NUll string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 * (file can not be created,file can not be written, write “fails”, etc…)
*/

int create_file(const char *filename, char *text_content)
{
	int fd, letters, w;

	if (!filename)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (letters = 0; text_content[letters]; letters++)
	;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	w = write(fd, text_content, letters);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
