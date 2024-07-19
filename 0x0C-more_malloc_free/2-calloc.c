#include <stdlib.h>
#include "main.h"

/**
 * _calloc - memory allocation using malloc
 *
 * @nmemb: array members
 * @size: size in bytes
 *
 * Return: pointer with allocated memory for arrry
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < nmemb * size; i++)
			ptr[i] = 0;
	}
	return (ptr);
}
