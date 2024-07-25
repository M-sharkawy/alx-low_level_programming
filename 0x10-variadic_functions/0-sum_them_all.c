#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - addition of arguments
 *
 * @n: number of argments
 *
 * Return: summation of all args
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
	return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}

	va_end(args);

	return (sum);
}
