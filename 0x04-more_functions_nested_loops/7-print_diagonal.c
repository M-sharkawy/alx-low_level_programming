#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: n is the number of times the character
 * should be printed
*/

void print_diagonal(int n)
{
	int backslash, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (backslash = 1; backslash <= n; backslash++)
		{
			for (space = 1; space <= backslash; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
