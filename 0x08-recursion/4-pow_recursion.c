#include "main.h"

/**
 * _pow_recursion - function that make x raised to the power of y.
 *
 * @x: input integer 1
 * @y: input integer 2
 *
 * Return: x rasied to the power by y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
