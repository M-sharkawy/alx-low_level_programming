#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: integer input
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n > 1)
	{
		print_binary(n >> 1);
	}
	else
	{
			_putchar('1');
			return;
	}

	_putchar((n & 1) ? '1' : '0');
}
