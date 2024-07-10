#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of n
 *
 * @n: input integer
 * @rot: root
 *
 * Return: the natural square root of n
*/
int _sqrt_(int n, int rot);

int _sqrt_recursion(int n)
{
	return (_sqrt_(n, 1));
}

/**
 * _sqrt_ - find square root
 * @rot: root
 * @n: int.
 * Return: integer
*/

int _sqrt_(int n, int rot)
{
	if (rot * rot < n)
	{
		return (_sqrt_(n, rot + 1));
	}
	else if (rot * rot == n)
	{
		return (rot);
	}
	else
	{
		return (-1);
	}
}
