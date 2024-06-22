#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print digits from 0 to 9
 *
 * Return: 0 (Sucess)
*/

int main(void)
{
	char n = '0';

	while (n <= 9)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

