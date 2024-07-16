#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array -  creates an array of chars 
 * which initialized with special char
 *
 * @size: array size
 * @c: special char
 *
 * Return: the array  
*/

char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *ptr = (char*)malloc(size * sizeof(char));
	
	if (size == 0)
	{
		return NULL;
	}

	if (ptr == 0)
	{
		return (NULL);
	}
	
	for (index = 0; index < size; index++)
	{
		ptr[index] = c;
	}

	return (ptr);
}
