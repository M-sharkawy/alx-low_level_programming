#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print digits from 0 to 9 using putchar
 *
 * Return: Always 0 (Sucess)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);
			n++;
	}
	printf("\n");
	return (0);
}
