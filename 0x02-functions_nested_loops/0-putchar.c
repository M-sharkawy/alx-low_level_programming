#include "main.h"

/**
 * main - Entry point
 *
 * Description: for loop to print _putchar
 *
 * Return: 0 always (success)
*/

int main(void)
{
	char s[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
		_putchar(s[c]);

	_putchar('\n');
	return (0);
}
