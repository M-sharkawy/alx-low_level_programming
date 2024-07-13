#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: count for arguments
 * @argv: array
 *
 * Return: argument name in seperate lines
*/

int main(int argc, char **argv)
{
    int i;

    for (i = 0; i < argc; i++)
    {
	printf("%s\n", argv[i]);
    }
	return (0);
}
