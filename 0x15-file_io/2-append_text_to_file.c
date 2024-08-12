#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: name of the file
 * @text_content: NULL string add at the end
 * 
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
    int fd, letters, w;

    if (!filename)
    {
        return (-1);
    }

    if (text_content == NULL)
    {
        return;
    }
    else
    {
        for (letters = 0; text_content[letters]; letters++)
        ;
    }

    fd = open(filename, O_WRONLY | O_APPEND, 0665);
    if (fd == -1)
        return (-1);

    w = write(fd, text_content, letters);
    if (w == -1)
        return (-1);

    close(fd);

    return (1);
}
