#include"function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print name
 *
 * @name: string added
 * @f: pointer to function
 *
 * return: pointer to function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
