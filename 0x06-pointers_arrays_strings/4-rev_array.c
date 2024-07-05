#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
*/

void reverse_array(int *a, int n)
{
	int tmp, i;

	/* Loop through half of the array elements */
	/* Swap elements from start and end towards the middle */
	for (i= n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];     /* Store the value of the element at the opposite end */
		a[n - 1 - i] = a[i];  /* Replace the element at the opposite end with current element */
		a[i] = tmp;  /* Replace the current element with the element from opposite end */
	}
}
