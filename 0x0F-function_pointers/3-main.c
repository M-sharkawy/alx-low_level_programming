#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: the parameters
 * @argv: the parameters in the case the number to be calculated.
 *
 * Return: 0 in success
*/

int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	ptr = get_op_func(argv[2]);

	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}
	result = ptr(n1, n2);

	printf("%d\n", result);
	return (0);
}
