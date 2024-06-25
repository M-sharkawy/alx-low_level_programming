#include "main.h"

/**
 * print_alphabet used for printing alphabetics - utilize _putchar
 *
 * Return: 0 (sucess)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
