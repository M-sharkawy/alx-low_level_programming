#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src,
 * including the terminating
 * null byte, to the end of the string pointed to by @dest.
 *
 * @dest: A pointer to the string.
 * @src: A pointer to The source string.
 *
 * Return: A pointer to the destination string @dest.
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	;

	for (j = 0; src[j]; j++)

	dest[i++] = src[j];

	return (dest);

}
