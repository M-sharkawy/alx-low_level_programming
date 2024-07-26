#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print all functions
 *
 * @format: listed args (any type)
 *
 * Return: void
*/

void print_all(const char * const format, ...)
{
	int j = 0, ind = 0;
	char *string1;
	char *seprtr = ", ";
	va_list allist;

	va_start(allist, format);

	while (format && format[ind])
		ind++;

	while (format && format[j])
	{
		if (j  == (ind - 1))
		{
			seprtr = "";
		}
		switch (format[j])
		{
		case 'i':
			printf("%d%s", va_arg(allist, int), seprtr);
			break;
		case 'c':
			printf("%c%s", va_arg(allist, int), seprtr);
			break;
		case 'f':
			printf("%f%s", va_arg(allist, double), seprtr);
			break;
		case 's':
			string1 = va_arg(allist, char *);
			if (string1 == NULL)
				string1 = "(nil)";
			printf("%s%s", string1, seprtr);
			break;
		}
		j++;
	}
	printf("\n");
	va_end(allist);
}
