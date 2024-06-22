#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: alphabetical order
 *
 * Return: 0 (success)
*/
int main(void)
{
	char n = 'a';
	char N = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (N <= 'Z')
	{
		putchar(N);
		N++;
	}
	putchar('\n');

	return (0);
}
