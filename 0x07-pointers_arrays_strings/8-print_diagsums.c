#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals
 *
 * @a: input pointer
 * @size: size of the matrix
*/

void print_diagsums(int *a, int size)
{
	int i, Sum1, Sum2;

	Sum1 = 0;
	Sum2 = 0;

	for (i = 0; i < size; i++)
	{
		Sum1 += a[(size * i) + i];
		Sum2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", Sum1, Sum2);
}
