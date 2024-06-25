#include "main.h"

/**
 * print_alphabet_x10 - utilize _putchar to print alphabetics 10 times
 *
*/
void print_alphabet_x10(void)
{
	int c;
	int l;

	for (l = 0; l <= 9 ; l++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
