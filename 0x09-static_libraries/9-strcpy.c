#include "main.h"

/**
 * _strcpy - copies a string from one pointer to another
 *	including the terminating null byte (\0)
 *
 * @src: source of string input
 * @dest: destination of string
 *
 * Return: new string
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
