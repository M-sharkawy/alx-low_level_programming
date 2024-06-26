#include"main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes input
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int lDigit;

	if (n < 0)
		lDigit = -1 * (n % 10);
	else
		lDigit = n % 10;

	_putchar(lDigit + '0');
	return (lDigit);
}
