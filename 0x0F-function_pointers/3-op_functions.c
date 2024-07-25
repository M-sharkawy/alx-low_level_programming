#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function addition
 *
 * @a: integer
 * @b: integer
 *
 * Return: a + b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function subtraction
 *
 * @a: integer
 * @b: integer
 *
 * Return: a - b
*/

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplication function
 *
 * @a: integer
 * @b: integer
 *
 * Return: a * b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 *
 * @a: integer
 * @b: integer
 *
 * Return: a / b
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulose function
 *
 * @a: integer
 * @b: integer
 *
 * Return: a % b
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
