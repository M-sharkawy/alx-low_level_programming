#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print alphabetics except e and q
 *
 * Return: Always 0
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
		alp_l++;
	}
	putchar('\n');
	return (0);
}
