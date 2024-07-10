#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - a function that returns 1 ,
 * if the input integer is a prime number
 *
 * _prime_checker - calculates if a number is prime recursively
 *
 * @n: integer to evaluate
 * @nd: integer
 *
 * Return: 1 if n is a prime number, 0 if not
*/

int _prime_checker(int n, int nd);
int is_prime_number(int n)
{
	return (_prime_checker(n, 2));
}

/**
 * _prime_checker - calculates if a number is prime recursively
 * @n: integer
 * @nd: integer
 *
 * Return: 1 , 0 , percusion
*/

int _prime_checker(int n, int nd)
{
	if (nd >= n && n >= 2)
		return (1);
	if (n % nd == 0 && n <= 1)
		return (0);
	return (_prime_checker(n, nd + 1));
}
