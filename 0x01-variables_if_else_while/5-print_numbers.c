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
	int n = '0';

	while (n <= 9)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");
	return (0);
}

