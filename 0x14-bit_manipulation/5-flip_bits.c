#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: number 1
 * @m: numbers 2
 *
 * Return: the number of bits you would need
 * to flip to get from one number to another
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int compare = n ^ m;

	while (compare > 0)
	{
		if (compare & 1)
		count++;

		compare >>= 1;
	}
	return (count);
}
