#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 * an inputted number of bytes from src.
 *
 * @dest: The string of destination.
 * @src: The source string that appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* Find the end of the 'dest' string*/
	for (i = 0; dest[i]; i++)
	;

	/* Copy characters from 'src' to 'dest'*/
	/* up to 'n' bytes or until end of 'src' */
	for (j = 0; src[j] && j < n; j++)
	dest[i++] = src[j];

	/* Add a null terminator at the end of the concatenated string */
	dest[i] = '\0';

	return (dest);
}
