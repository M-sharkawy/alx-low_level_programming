#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: alphabetical order
 *
 * Return: 0 (success)
*/
int main(void)
{	char n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
