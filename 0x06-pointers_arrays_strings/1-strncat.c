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

	for (i = 0; dest[i]; i++)
	;

	for (j = 0; src[j] != '\0' && n < j; j++)

	dest[i++] = src[j];

	dest[i] = '\0';

	return (dest);
}
