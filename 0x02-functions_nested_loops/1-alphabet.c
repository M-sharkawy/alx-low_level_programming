#include "main.h"

/**
 * main - entry point
 *
 * Description: print_alphabet used for printing alphabetics
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
