#include"main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the square size
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	}
}
