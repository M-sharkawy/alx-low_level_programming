#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "stddef.h"
/**
 * array_iterator - iterate array by execution of a function
 *
 * @array: pointer to first element in an array
 * @size: size of array elements
 * @action: pointer of function that print
 *
 * return: Null
*/



void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
