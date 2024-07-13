#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: count for arguments
 * @argv: array of vector
 *
 * Return: multi of 2 numbers or error
*/

int main(int argc, char **argv)
{
	int i, multi;

	multi = 1;
	if (argc < 3)
	{
	printf("%s\n", "Error");
	return (1);
	}
	for (i = 1; i < argc; i++)
	{
		multi = multi * atoi(argv[i]);
	}
	printf("%d\n", multi);
	return (0);
}
