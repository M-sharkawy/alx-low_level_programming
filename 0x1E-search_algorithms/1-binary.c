#include "search_algos.h"

/**
 * binary_search - function of binary search
 *
 * @array: array for elements
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: index of the value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t i, mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
        for (i = low; i <= high; i++)
        {
            printf("%d", array[i]);
            if (i < high)
                printf(", ");
        }
        printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
