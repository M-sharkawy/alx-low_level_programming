#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 *
 * @a: 2 D array
 *
 * return: 0
*/

void print_chessboard(char (*a)[8])
{
	int index, jndex;

	for (index = 0; index < 8; index++)
	{
		for (jndex = 0; jndex < 8; jndex++)
			_putchar(a[index][jndex]);

		_putchar('\n');
	}
}
