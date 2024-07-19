#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - pointer for memory allocation
 *
 * @b: number of integers
 *
 * Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}
