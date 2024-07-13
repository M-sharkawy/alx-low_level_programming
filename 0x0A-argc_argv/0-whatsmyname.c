#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: count for arguments
 * @argv: array
 *
 * Return: name of argument array
*/

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
