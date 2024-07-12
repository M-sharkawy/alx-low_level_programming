#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: count for arguments
 * @argv: array for vector
 *
 * Return: 0 success
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
