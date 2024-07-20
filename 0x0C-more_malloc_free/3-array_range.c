#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - function writes array of integers
 *
 * @min: the minimum value of the array
 * @max: the maxmium value of the array
 *
 * Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int len;
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		len = (max - min + 1);
	}

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
			ptr[i] = min + i;
	}
	return (ptr);
}
