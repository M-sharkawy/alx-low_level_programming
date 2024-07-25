#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - string printing
 *
 * @separator: separator betwwen strings
 * @n: numbers of arg
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *string;

	if (separator == NULL || *separator == '\0')
	{
		separator = "";
	}

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char*);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", string);

			if (i < (n - 1))
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
