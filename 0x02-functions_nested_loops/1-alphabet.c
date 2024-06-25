#include "main.h"

/**
 * print_alphabet - utilize _putchar for printing alphabetics
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
