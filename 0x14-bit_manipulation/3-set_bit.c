#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 *
 * @index: is the index, starting from 0 of the bit you want to set
 * @n: pointer to a number
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8 - 1)
	{
		return (-1);
	}

	*n = *n | (1 << index);

	return (1);
}
