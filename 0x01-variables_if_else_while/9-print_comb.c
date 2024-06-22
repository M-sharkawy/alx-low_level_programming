#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print digit in an ascending order using putchar
 *
 * Return: 0 (success)
*/
int main(void)
{	int n = 48;
	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}
	putchar('\n');

	return (0);
}
