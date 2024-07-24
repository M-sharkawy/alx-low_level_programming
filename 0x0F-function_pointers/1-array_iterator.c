#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "stddef.h"
/**
 * 
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
