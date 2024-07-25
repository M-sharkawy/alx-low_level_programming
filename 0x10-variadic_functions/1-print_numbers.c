#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print args
 *
 * @separator: separate between args
 * @n: elements to be printed
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int result;
	unsigned int i;
	va_list args;

	if (separator == NULL || n == 0)
	{
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(args, const unsigned int);
		printf("%d", result);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
