#include "function_pointers.h"
#include "function_pointers.h"

/**
 * int_index - this functions find the index of an int
 *
 *@array: the array of integers
 *@size: the array size
 *@cmp: this a function pointer.
 *
 * Return: 1 or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
