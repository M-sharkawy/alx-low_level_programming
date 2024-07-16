#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid -  returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @width: rows of 2D
 * @height: columns of 2D
 *
 * Return: pointer for 2D array
 */

int **alloc_grid(int width, int height)
{
	int **rows;
	int i, j;

	if (width <= 0 || height < 1)
	{
		return (NULL);
	}

	rows = malloc(sizeof(int *) * height);
	if (rows == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		rows[i] = malloc(sizeof(int) * width);

		if (rows[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(rows[j]);
			}
			free(rows);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			rows[i][j] = 0;
		}
	}
	return (rows);
}
