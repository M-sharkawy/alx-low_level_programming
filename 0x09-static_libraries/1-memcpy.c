#include <stdio.h>
#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: pointer to the dest array.
 * @src: pointer to source of data to be copied.
 * @n: number of bytes to be copied.
 *
 * Return: A pointer to the destination buffer @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
