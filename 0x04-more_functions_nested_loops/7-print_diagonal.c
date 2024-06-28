#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: n is the number of times the character
 * should be printed
*/

void print_diagonal(int n)
{
	int a, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a < n; a++)
		{
			for (space = 1; space < a; space++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
